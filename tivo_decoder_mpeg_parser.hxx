
#ifndef __TIVO_DECODER_MPEG_PARSER_HXX__
#define __TIVO_DECODER_MPEG_PARSER_HXX__
//
//#include <stddef.h>

#ifdef HAVE_CONFIG_H
#include "tdconfig.h"
#endif

#include <stdio.h>

#ifdef HAVE_STDLIB_H
#include <stdlib.h>
#endif

#ifdef HAVE_STRING_H
#include <string.h>
#endif

#ifdef WIN32
#include <windows.h>
#endif

#ifdef HAVE_SYS_TYPES_H
#include <sys/types.h>
#endif

#ifdef HAVE_NETINET_IN_H
#include <netinet/in.h>
#endif

#include "tivo_types.hxx"


class TiVoDecoder_MPEG2_Parser
{
    private:

        UINT32 _bit_ptr;
        BOOL   _end_of_file;
        UINT32 _buffer_length;
        UINT8  * _pBuffer;

        /* start codes */
        UINT32 picture_start_code;
        UINT32 slice_start_code;
        UINT32 user_data_start_code;
        UINT32 sequence_header_code;
        UINT32 sequence_error_code;
        UINT32 extension_start_code;
        UINT32 sequence_end_code;
        UINT32 group_start_code;

        /* extension start codes */
        UINT8 sequence_extension_id;
        UINT8 sequence_display_extension_id;
        UINT8 quant_matrix_extension_id;
        UINT8 copyright_extension_id;
        UINT8 sequence_scalable_extension_id;
        UINT8 picture_display_extension_id;
        UINT8 picture_coding_extension_id;
        UINT8 picture_spatial_scalable_extension_id;
        UINT8 picture_temporal_scalable_extension_id;

        /* scalable modes */
        UINT8 data_partitioning;
        UINT8 spatial_scalability;
        UINT8 snr_scalability;
        UINT8 temporal_scalability;
        
        /* private variables */
        UINT8   progressive_sequence;
        UINT8   repeat_first_field;
        UINT8   top_field_first;
        UINT16  vertical_size;
        UINT8   scalable_mode;
        UINT8   picture_structure;

    public :

        TiVoDecoder_MPEG2_Parser( );
        TiVoDecoder_MPEG2_Parser( UINT8 * pBuffer, UINT16 bufLen );
        void    setBuffer(UINT8 * pBuffer, UINT16 bufLen );

        inline BOOL    isEndOfFile() { return(_end_of_file); }
        inline UINT16  getReadPos()  { return(_bit_ptr / 8); }

        BOOL    byteAligned();
        void    advanceBits(UINT32 n);
        INT32   nextbits(UINT32 n);
        INT32   readByte(UINT32 bit_pos, UINT8 & byte);

        void    next_start_code();
        void    video_sequence();
        void    sequence_end();
        void    sequence_header();
        void    extension_and_user_data(INT32 i);
        void    extension_data(INT32 i);
        void    user_data();
        void    sequence_extension();
        void    sequence_display_extension();
        void    sequence_scalable_extension();
        void    group_of_pictures_header();
        void    picture_header();
        void    picture_coding_extension();
        void    quant_matrix_extension();
        void    picture_display_extension();
        void    picture_spatial_scalable_extension(); 
        void    picture_temporal_scalable_extension(); 
        void    copyright_extension(); 
        void    picture_data(); 
        void    extension_header();
        void    pes_header();
        void    pes_header_extension();


        void    slice();
        void    macroblock();


};

#endif /* __TIVO_DECODER_MPEG_PARSER_HXX__ */
