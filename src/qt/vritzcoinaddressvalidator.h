// Copyright (c) 2011-2014 The Vritzcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_QT_BITCOINADDRESSVALIDATOR_H
#define BITCOIN_QT_BITCOINADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class VritzcoinAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit VritzcoinAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** Vritzcoin address widget validator, checks for a valid vritzcoin address.
 */
class VritzcoinAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit VritzcoinAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // BITCOIN_QT_BITCOINADDRESSVALIDATOR_H
