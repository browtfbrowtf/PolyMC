#pragma once

#include <QFileInfo>
#include <QString>
#include <QUrl>

/**
 * This wraps around QDesktopServices and adds workarounds where needed
 * Use this instead of QDesktopServices!
 */
namespace DesktopServices
{
    /**
    * Open a path in whatever application is applicable.
    * @param ensureFolderPathExists Make sure the path exists
    */
    bool openPath(const QFileInfo& path, bool ensureFolderPathExists = false);

    /**
    * Open a path in whatever application is applicable.
    * @param ensureFolderPathExists Make sure the path exists
     */
    bool openPath(const QString& path, bool ensureFolderPathExists = false);

    /**
     * Run an application
     */
    bool run(const QString &application,const QStringList &args, const QString & workingDirectory = QString(), qint64 *pid = 0);

    /**
     * Open the URL, most likely in a browser. Maybe.
     */
    bool openUrl(const QUrl &url);
}
