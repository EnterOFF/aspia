//
// Aspia Project
// Copyright (C) 2018 Dmitry Chapyshev <dmitry@aspia.ru>
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program. If not, see <https://www.gnu.org/licenses/>.
//

#ifndef ASPIA_UPDATER__UPDATE_INFO_H_
#define ASPIA_UPDATER__UPDATE_INFO_H_

#include <QString>
#include <QUrl>
#include <QVersionNumber>

namespace aspia {

class UpdateInfo
{
public:
    UpdateInfo() = default;
    UpdateInfo(const UpdateInfo& other) = default;
    UpdateInfo& operator=(const UpdateInfo& other) = default;
    ~UpdateInfo() = default;

    static UpdateInfo fromXml(const QByteArray& buffer);

    QVersionNumber version() const { return version_; }
    QString description() const { return description_; }
    QUrl url() const { return url_; }

private:
    QVersionNumber version_;
    QString description_;
    QUrl url_;
};

} // namespace aspia

#endif // ASPIA_UPDATER__UPDATE_H_