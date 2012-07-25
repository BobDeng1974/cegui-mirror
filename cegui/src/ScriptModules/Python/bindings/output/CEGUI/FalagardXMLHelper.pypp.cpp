// This file has been generated by Py++.

#include "boost/python.hpp"
#include "python_CEGUI.h"
#include "FalagardXMLHelper.pypp.hpp"

namespace bp = boost::python;

void register_FalagardXMLHelper_class(){

    { //::CEGUI::FalagardXMLHelper_wrapper
        typedef bp::class_< CEGUI::FalagardXMLHelper_wrapper > FalagardXMLHelper_exposer_t;
        FalagardXMLHelper_exposer_t FalagardXMLHelper_exposer = FalagardXMLHelper_exposer_t( "FalagardXMLHelper" );
        bp::scope FalagardXMLHelper_scope( FalagardXMLHelper_exposer );
        { //::CEGUI::FalagardXMLHelper_wrapper::childEventActionToStringn
        
            typedef ::CEGUI::String ( *childEventActionToStringn_function_type )( ::CEGUI::ChildEventAction );
            
            FalagardXMLHelper_exposer.def( 
                "childEventActionToStringn"
                , childEventActionToStringn_function_type( &::CEGUI::FalagardXMLHelper_wrapper::childEventActionToStringn )
                , ( bp::arg("val") ) );
        
        }
        { //::CEGUI::FalagardXMLHelper_wrapper::dimensionOperatorToString
        
            typedef ::CEGUI::String ( *dimensionOperatorToString_function_type )( ::CEGUI::DimensionOperator );
            
            FalagardXMLHelper_exposer.def( 
                "dimensionOperatorToString"
                , dimensionOperatorToString_function_type( &::CEGUI::FalagardXMLHelper_wrapper::dimensionOperatorToString )
                , ( bp::arg("val") ) );
        
        }
        { //::CEGUI::FalagardXMLHelper_wrapper::dimensionTypeToString
        
            typedef ::CEGUI::String ( *dimensionTypeToString_function_type )( ::CEGUI::DimensionType );
            
            FalagardXMLHelper_exposer.def( 
                "dimensionTypeToString"
                , dimensionTypeToString_function_type( &::CEGUI::FalagardXMLHelper_wrapper::dimensionTypeToString )
                , ( bp::arg("val") ) );
        
        }
        { //::CEGUI::FalagardXMLHelper_wrapper::fontMetricTypeToString
        
            typedef ::CEGUI::String ( *fontMetricTypeToString_function_type )( ::CEGUI::FontMetricType );
            
            FalagardXMLHelper_exposer.def( 
                "fontMetricTypeToString"
                , fontMetricTypeToString_function_type( &::CEGUI::FalagardXMLHelper_wrapper::fontMetricTypeToString )
                , ( bp::arg("val") ) );
        
        }
        { //::CEGUI::FalagardXMLHelper_wrapper::frameImageComponentToString
        
            typedef ::CEGUI::String ( *frameImageComponentToString_function_type )( ::CEGUI::FrameImageComponent );
            
            FalagardXMLHelper_exposer.def( 
                "frameImageComponentToString"
                , frameImageComponentToString_function_type( &::CEGUI::FalagardXMLHelper_wrapper::frameImageComponentToString )
                , ( bp::arg("val") ) );
        
        }
        { //::CEGUI::FalagardXMLHelper_wrapper::horzAlignmentToString
        
            typedef ::CEGUI::String ( *horzAlignmentToString_function_type )( ::CEGUI::HorizontalAlignment );
            
            FalagardXMLHelper_exposer.def( 
                "horzAlignmentToString"
                , horzAlignmentToString_function_type( &::CEGUI::FalagardXMLHelper_wrapper::horzAlignmentToString )
                , ( bp::arg("val") ) );
        
        }
        { //::CEGUI::FalagardXMLHelper_wrapper::horzFormatToString
        
            typedef ::CEGUI::String ( *horzFormatToString_function_type )( ::CEGUI::HorizontalFormatting );
            
            FalagardXMLHelper_exposer.def( 
                "horzFormatToString"
                , horzFormatToString_function_type( &::CEGUI::FalagardXMLHelper_wrapper::horzFormatToString )
                , ( bp::arg("val") ) );
        
        }
        { //::CEGUI::FalagardXMLHelper_wrapper::horzTextFormatToString
        
            typedef ::CEGUI::String ( *horzTextFormatToString_function_type )( ::CEGUI::HorizontalTextFormatting );
            
            FalagardXMLHelper_exposer.def( 
                "horzTextFormatToString"
                , horzTextFormatToString_function_type( &::CEGUI::FalagardXMLHelper_wrapper::horzTextFormatToString )
                , ( bp::arg("val") ) );
        
        }
        { //::CEGUI::FalagardXMLHelper_wrapper::stringToChildEventAction
        
            typedef ::CEGUI::ChildEventAction ( *stringToChildEventAction_function_type )( ::CEGUI::String const & );
            
            FalagardXMLHelper_exposer.def( 
                "stringToChildEventAction"
                , stringToChildEventAction_function_type( &::CEGUI::FalagardXMLHelper_wrapper::stringToChildEventAction )
                , ( bp::arg("str") ) );
        
        }
        { //::CEGUI::FalagardXMLHelper_wrapper::stringToDimensionOperator
        
            typedef ::CEGUI::DimensionOperator ( *stringToDimensionOperator_function_type )( ::CEGUI::String const & );
            
            FalagardXMLHelper_exposer.def( 
                "stringToDimensionOperator"
                , stringToDimensionOperator_function_type( &::CEGUI::FalagardXMLHelper_wrapper::stringToDimensionOperator )
                , ( bp::arg("str") ) );
        
        }
        { //::CEGUI::FalagardXMLHelper_wrapper::stringToDimensionType
        
            typedef ::CEGUI::DimensionType ( *stringToDimensionType_function_type )( ::CEGUI::String const & );
            
            FalagardXMLHelper_exposer.def( 
                "stringToDimensionType"
                , stringToDimensionType_function_type( &::CEGUI::FalagardXMLHelper_wrapper::stringToDimensionType )
                , ( bp::arg("str") ) );
        
        }
        { //::CEGUI::FalagardXMLHelper_wrapper::stringToFontMetricType
        
            typedef ::CEGUI::FontMetricType ( *stringToFontMetricType_function_type )( ::CEGUI::String const & );
            
            FalagardXMLHelper_exposer.def( 
                "stringToFontMetricType"
                , stringToFontMetricType_function_type( &::CEGUI::FalagardXMLHelper_wrapper::stringToFontMetricType )
                , ( bp::arg("str") ) );
        
        }
        { //::CEGUI::FalagardXMLHelper_wrapper::stringToFrameImageComponent
        
            typedef ::CEGUI::FrameImageComponent ( *stringToFrameImageComponent_function_type )( ::CEGUI::String const & );
            
            FalagardXMLHelper_exposer.def( 
                "stringToFrameImageComponent"
                , stringToFrameImageComponent_function_type( &::CEGUI::FalagardXMLHelper_wrapper::stringToFrameImageComponent )
                , ( bp::arg("str") ) );
        
        }
        { //::CEGUI::FalagardXMLHelper_wrapper::stringToHorzAlignment
        
            typedef ::CEGUI::HorizontalAlignment ( *stringToHorzAlignment_function_type )( ::CEGUI::String const & );
            
            FalagardXMLHelper_exposer.def( 
                "stringToHorzAlignment"
                , stringToHorzAlignment_function_type( &::CEGUI::FalagardXMLHelper_wrapper::stringToHorzAlignment )
                , ( bp::arg("str") ) );
        
        }
        { //::CEGUI::FalagardXMLHelper_wrapper::stringToHorzFormat
        
            typedef ::CEGUI::HorizontalFormatting ( *stringToHorzFormat_function_type )( ::CEGUI::String const & );
            
            FalagardXMLHelper_exposer.def( 
                "stringToHorzFormat"
                , stringToHorzFormat_function_type( &::CEGUI::FalagardXMLHelper_wrapper::stringToHorzFormat )
                , ( bp::arg("str") ) );
        
        }
        { //::CEGUI::FalagardXMLHelper_wrapper::stringToHorzTextFormat
        
            typedef ::CEGUI::HorizontalTextFormatting ( *stringToHorzTextFormat_function_type )( ::CEGUI::String const & );
            
            FalagardXMLHelper_exposer.def( 
                "stringToHorzTextFormat"
                , stringToHorzTextFormat_function_type( &::CEGUI::FalagardXMLHelper_wrapper::stringToHorzTextFormat )
                , ( bp::arg("str") ) );
        
        }
        { //::CEGUI::FalagardXMLHelper_wrapper::stringToVertAlignment
        
            typedef ::CEGUI::VerticalAlignment ( *stringToVertAlignment_function_type )( ::CEGUI::String const & );
            
            FalagardXMLHelper_exposer.def( 
                "stringToVertAlignment"
                , stringToVertAlignment_function_type( &::CEGUI::FalagardXMLHelper_wrapper::stringToVertAlignment )
                , ( bp::arg("str") ) );
        
        }
        { //::CEGUI::FalagardXMLHelper_wrapper::stringToVertFormat
        
            typedef ::CEGUI::VerticalFormatting ( *stringToVertFormat_function_type )( ::CEGUI::String const & );
            
            FalagardXMLHelper_exposer.def( 
                "stringToVertFormat"
                , stringToVertFormat_function_type( &::CEGUI::FalagardXMLHelper_wrapper::stringToVertFormat )
                , ( bp::arg("str") ) );
        
        }
        { //::CEGUI::FalagardXMLHelper_wrapper::stringToVertTextFormat
        
            typedef ::CEGUI::VerticalTextFormatting ( *stringToVertTextFormat_function_type )( ::CEGUI::String const & );
            
            FalagardXMLHelper_exposer.def( 
                "stringToVertTextFormat"
                , stringToVertTextFormat_function_type( &::CEGUI::FalagardXMLHelper_wrapper::stringToVertTextFormat )
                , ( bp::arg("str") ) );
        
        }
        { //::CEGUI::FalagardXMLHelper_wrapper::vertAlignmentToString
        
            typedef ::CEGUI::String ( *vertAlignmentToString_function_type )( ::CEGUI::VerticalAlignment );
            
            FalagardXMLHelper_exposer.def( 
                "vertAlignmentToString"
                , vertAlignmentToString_function_type( &::CEGUI::FalagardXMLHelper_wrapper::vertAlignmentToString )
                , ( bp::arg("val") ) );
        
        }
        { //::CEGUI::FalagardXMLHelper_wrapper::vertFormatToString
        
            typedef ::CEGUI::String ( *vertFormatToString_function_type )( ::CEGUI::VerticalFormatting );
            
            FalagardXMLHelper_exposer.def( 
                "vertFormatToString"
                , vertFormatToString_function_type( &::CEGUI::FalagardXMLHelper_wrapper::vertFormatToString )
                , ( bp::arg("val") ) );
        
        }
        { //::CEGUI::FalagardXMLHelper_wrapper::vertTextFormatToString
        
            typedef ::CEGUI::String ( *vertTextFormatToString_function_type )( ::CEGUI::VerticalTextFormatting );
            
            FalagardXMLHelper_exposer.def( 
                "vertTextFormatToString"
                , vertTextFormatToString_function_type( &::CEGUI::FalagardXMLHelper_wrapper::vertTextFormatToString )
                , ( bp::arg("val") ) );
        
        }
        FalagardXMLHelper_exposer.staticmethod( "childEventActionToStringn" );
        FalagardXMLHelper_exposer.staticmethod( "dimensionOperatorToString" );
        FalagardXMLHelper_exposer.staticmethod( "dimensionTypeToString" );
        FalagardXMLHelper_exposer.staticmethod( "fontMetricTypeToString" );
        FalagardXMLHelper_exposer.staticmethod( "frameImageComponentToString" );
        FalagardXMLHelper_exposer.staticmethod( "horzAlignmentToString" );
        FalagardXMLHelper_exposer.staticmethod( "horzFormatToString" );
        FalagardXMLHelper_exposer.staticmethod( "horzTextFormatToString" );
        FalagardXMLHelper_exposer.staticmethod( "stringToChildEventAction" );
        FalagardXMLHelper_exposer.staticmethod( "stringToDimensionOperator" );
        FalagardXMLHelper_exposer.staticmethod( "stringToDimensionType" );
        FalagardXMLHelper_exposer.staticmethod( "stringToFontMetricType" );
        FalagardXMLHelper_exposer.staticmethod( "stringToFrameImageComponent" );
        FalagardXMLHelper_exposer.staticmethod( "stringToHorzAlignment" );
        FalagardXMLHelper_exposer.staticmethod( "stringToHorzFormat" );
        FalagardXMLHelper_exposer.staticmethod( "stringToHorzTextFormat" );
        FalagardXMLHelper_exposer.staticmethod( "stringToVertAlignment" );
        FalagardXMLHelper_exposer.staticmethod( "stringToVertFormat" );
        FalagardXMLHelper_exposer.staticmethod( "stringToVertTextFormat" );
        FalagardXMLHelper_exposer.staticmethod( "vertAlignmentToString" );
        FalagardXMLHelper_exposer.staticmethod( "vertFormatToString" );
        FalagardXMLHelper_exposer.staticmethod( "vertTextFormatToString" );
    }

}