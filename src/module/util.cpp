
/***************************************************************
 * Name:      util.cpp
 * Purpose:   Code for Node-CEF Utility Module
 * Author:    Joshua GPBeta (studiocghibli@gmail.com)
 * Created:   2016-05-27
 * Copyright: Studio GPBeta (www.gpbeta.com)
 * License:
 **************************************************************/

/// ============================================================================
/// declarations
/// ============================================================================

/// ----------------------------------------------------------------------------
/// headers
/// ----------------------------------------------------------------------------

#include "ncjs/module.h"

namespace ncjs {

/// ============================================================================
/// implementation
/// ============================================================================

/// ----------------------------------------------------------------------------
/// ModuleUtil
/// ----------------------------------------------------------------------------

class ModuleUtil : public JsObjecT<ModuleUtil> {

    // object factory

    NCJS_BEGIN_OBJECT_FACTORY()
    NCJS_END_OBJECT_FACTORY()

};

/// ----------------------------------------------------------------------------
/// define module
/// ----------------------------------------------------------------------------

NCJS_DEFINE_BUILTIN_MODULE(util, ModuleUtil);

} // ncjs