// This file has been generated by Py++.

#include "boost/python.hpp"
#include "generators/include/python_CEGUIOpenGLRenderer.h"
#include "OpenGL3Shader.pypp.hpp"

namespace bp = boost::python;

void register_OpenGL3Shader_class(){

    { //::CEGUI::OpenGL3Shader
        typedef bp::class_< CEGUI::OpenGL3Shader, boost::noncopyable > OpenGL3Shader_exposer_t;
        OpenGL3Shader_exposer_t OpenGL3Shader_exposer = OpenGL3Shader_exposer_t( "OpenGL3Shader", bp::init< std::string const &, std::string const & >(( bp::arg("vertex_shader_source"), bp::arg("fragment_shader_source") ), "*!\n\
        \n\
            Creates and loads shader programs from the two strings supplied to it\n\
        *\n") );
        bp::scope OpenGL3Shader_scope( OpenGL3Shader_exposer );
        { //::CEGUI::OpenGL3Shader::bind
        
            typedef void ( ::CEGUI::OpenGL3Shader::*bind_function_type )(  ) const;
            
            OpenGL3Shader_exposer.def( 
                "bind"
                , bind_function_type( &::CEGUI::OpenGL3Shader::bind )
                , "*!\n\
            \n\
                Bind the shader to the OGL state-machine\n\
            *\n" );
        
        }
        { //::CEGUI::OpenGL3Shader::bindFragDataLocation
        
            typedef void ( ::CEGUI::OpenGL3Shader::*bindFragDataLocation_function_type )( ::std::string const & ) ;
            
            OpenGL3Shader_exposer.def( 
                "bindFragDataLocation"
                , bindFragDataLocation_function_type( &::CEGUI::OpenGL3Shader::bindFragDataLocation )
                , ( bp::arg("name") )
                , "*!\n\
            \n\
                Defines the name of the variable inside the shader which represents the\n\
                final color for each fragment.\n\
            *\n" );
        
        }
        { //::CEGUI::OpenGL3Shader::getAttribLocation
        
            typedef ::GLuint ( ::CEGUI::OpenGL3Shader::*getAttribLocation_function_type )( ::std::string const & ) const;
            
            OpenGL3Shader_exposer.def( 
                "getAttribLocation"
                , getAttribLocation_function_type( &::CEGUI::OpenGL3Shader::getAttribLocation )
                , ( bp::arg("name") )
                , "*!\n\
            \n\
                Query the location of a vertex attribute inside the shader.\n\
            *\n" );
        
        }
        { //::CEGUI::OpenGL3Shader::getUniformLocation
        
            typedef ::GLuint ( ::CEGUI::OpenGL3Shader::*getUniformLocation_function_type )( ::std::string const & ) const;
            
            OpenGL3Shader_exposer.def( 
                "getUniformLocation"
                , getUniformLocation_function_type( &::CEGUI::OpenGL3Shader::getUniformLocation )
                , ( bp::arg("name") )
                , "*!\n\
            \n\
                Query the location of a uniform variable inside the shader.\n\
            *\n" );
        
        }
        { //::CEGUI::OpenGL3Shader::isCreatedSuccessfully
        
            typedef bool ( ::CEGUI::OpenGL3Shader::*isCreatedSuccessfully_function_type )(  ) ;
            
            OpenGL3Shader_exposer.def( 
                "isCreatedSuccessfully"
                , isCreatedSuccessfully_function_type( &::CEGUI::OpenGL3Shader::isCreatedSuccessfully ) );
        
        }
        { //::CEGUI::OpenGL3Shader::link
        
            typedef void ( ::CEGUI::OpenGL3Shader::*link_function_type )(  ) ;
            
            OpenGL3Shader_exposer.def( 
                "link"
                , link_function_type( &::CEGUI::OpenGL3Shader::link ) );
        
        }
        { //::CEGUI::OpenGL3Shader::unbind
        
            typedef void ( ::CEGUI::OpenGL3Shader::*unbind_function_type )(  ) const;
            
            OpenGL3Shader_exposer.def( 
                "unbind"
                , unbind_function_type( &::CEGUI::OpenGL3Shader::unbind )
                , "*!\n\
            \n\
                Unbind the shader\n\
            *\n" );
        
        }
    }

}
