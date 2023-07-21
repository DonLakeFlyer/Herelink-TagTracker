#include "CustomOptions.h"
#include "CustomPlugin.h"

CustomOptions::CustomOptions(CustomPlugin* plugin, QObject* parent)
    : HerelinkOptions(qobject_cast<HerelinkCorePlugin*>(plugin), parent)
{

}
