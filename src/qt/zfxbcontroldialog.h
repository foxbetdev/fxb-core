// Copyright (c) 2017-2018 The PIVX developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef ZFXBCONTROLDIALOG_H
#define ZFXBCONTROLDIALOG_H

#include <QDialog>
#include <QTreeWidgetItem>
#include "zfxb/zerocoin.h"
#include "privacydialog.h"

class CZerocoinMint;
class WalletModel;

namespace Ui {
class ZFxbControlDialog;
}

class CZFxbControlWidgetItem : public QTreeWidgetItem
{
public:
    explicit CZFxbControlWidgetItem(QTreeWidget *parent, int type = Type) : QTreeWidgetItem(parent, type) {}
    explicit CZFxbControlWidgetItem(int type = Type) : QTreeWidgetItem(type) {}
    explicit CZFxbControlWidgetItem(QTreeWidgetItem *parent, int type = Type) : QTreeWidgetItem(parent, type) {}

    bool operator<(const QTreeWidgetItem &other) const;
};

class ZFxbControlDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ZFxbControlDialog(QWidget *parent);
    ~ZFxbControlDialog();

    void setModel(WalletModel* model);

    static std::set<std::string> setSelectedMints;
    static std::set<CMintMeta> setMints;
    static std::vector<CMintMeta> GetSelectedMints();

private:
    Ui::ZFxbControlDialog *ui;
    WalletModel* model;
    PrivacyDialog* privacyDialog;

    void updateList();
    void updateLabels();

    enum {
        COLUMN_CHECKBOX,
        COLUMN_DENOMINATION,
        COLUMN_PUBCOIN,
        COLUMN_VERSION,
        COLUMN_PRECOMPUTE,
        COLUMN_CONFIRMATIONS,
        COLUMN_ISSPENDABLE
    };
    friend class CZFxbControlWidgetItem;

private slots:
    void updateSelection(QTreeWidgetItem* item, int column);
    void ButtonAllClicked();
};

#endif // ZFXBCONTROLDIALOG_H
