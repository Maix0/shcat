/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_641.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3205(t_small_parse_table_array *v)
{
	v->a[64100] = anon_sym_AMP_AMP;
	v->a[64101] = anon_sym_PIPE_PIPE;
	v->a[64102] = anon_sym_LT;
	v->a[64103] = anon_sym_GT;
	v->a[64104] = anon_sym_GT_GT;
	v->a[64105] = anon_sym_LT_AMP;
	v->a[64106] = anon_sym_GT_AMP;
	v->a[64107] = anon_sym_GT_PIPE;
	v->a[64108] = anon_sym_LT_GT;
	v->a[64109] = anon_sym_LT_LT;
	v->a[64110] = anon_sym_LT_LT_DASH;
	v->a[64111] = anon_sym_SEMI;
	v->a[64112] = 3;
	v->a[64113] = actions(3);
	v->a[64114] = 1;
	v->a[64115] = sym_comment;
	v->a[64116] = actions(2183);
	v->a[64117] = 2;
	v->a[64118] = sym_file_descriptor;
	v->a[64119] = aux_sym_heredoc_redirect_token1;
	small_parse_table_3206(v);
}

void	small_parse_table_3206(t_small_parse_table_array *v)
{
	v->a[64120] = actions(2185);
	v->a[64121] = 15;
	v->a[64122] = anon_sym_esac;
	v->a[64123] = anon_sym_PIPE;
	v->a[64124] = anon_sym_SEMI_SEMI;
	v->a[64125] = anon_sym_AMP_AMP;
	v->a[64126] = anon_sym_PIPE_PIPE;
	v->a[64127] = anon_sym_LT;
	v->a[64128] = anon_sym_GT;
	v->a[64129] = anon_sym_GT_GT;
	v->a[64130] = anon_sym_LT_AMP;
	v->a[64131] = anon_sym_GT_AMP;
	v->a[64132] = anon_sym_GT_PIPE;
	v->a[64133] = anon_sym_LT_GT;
	v->a[64134] = anon_sym_LT_LT;
	v->a[64135] = anon_sym_LT_LT_DASH;
	v->a[64136] = anon_sym_SEMI;
	v->a[64137] = 3;
	v->a[64138] = actions(3);
	v->a[64139] = 1;
	small_parse_table_3207(v);
}

void	small_parse_table_3207(t_small_parse_table_array *v)
{
	v->a[64140] = sym_comment;
	v->a[64141] = actions(2191);
	v->a[64142] = 2;
	v->a[64143] = sym_file_descriptor;
	v->a[64144] = aux_sym_heredoc_redirect_token1;
	v->a[64145] = actions(2193);
	v->a[64146] = 15;
	v->a[64147] = anon_sym_esac;
	v->a[64148] = anon_sym_PIPE;
	v->a[64149] = anon_sym_SEMI_SEMI;
	v->a[64150] = anon_sym_AMP_AMP;
	v->a[64151] = anon_sym_PIPE_PIPE;
	v->a[64152] = anon_sym_LT;
	v->a[64153] = anon_sym_GT;
	v->a[64154] = anon_sym_GT_GT;
	v->a[64155] = anon_sym_LT_AMP;
	v->a[64156] = anon_sym_GT_AMP;
	v->a[64157] = anon_sym_GT_PIPE;
	v->a[64158] = anon_sym_LT_GT;
	v->a[64159] = anon_sym_LT_LT;
	small_parse_table_3208(v);
}

void	small_parse_table_3208(t_small_parse_table_array *v)
{
	v->a[64160] = anon_sym_LT_LT_DASH;
	v->a[64161] = anon_sym_SEMI;
	v->a[64162] = 10;
	v->a[64163] = actions(3);
	v->a[64164] = 1;
	v->a[64165] = sym_comment;
	v->a[64166] = actions(1037);
	v->a[64167] = 1;
	v->a[64168] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[64169] = actions(1039);
	v->a[64170] = 1;
	v->a[64171] = anon_sym_DOLLAR;
	v->a[64172] = actions(1041);
	v->a[64173] = 1;
	v->a[64174] = anon_sym_DQUOTE;
	v->a[64175] = actions(1043);
	v->a[64176] = 1;
	v->a[64177] = anon_sym_DOLLAR_LBRACE;
	v->a[64178] = actions(1045);
	v->a[64179] = 1;
	small_parse_table_3209(v);
}

void	small_parse_table_3209(t_small_parse_table_array *v)
{
	v->a[64180] = anon_sym_DOLLAR_LPAREN;
	v->a[64181] = actions(1047);
	v->a[64182] = 1;
	v->a[64183] = anon_sym_BQUOTE;
	v->a[64184] = actions(2395);
	v->a[64185] = 1;
	v->a[64186] = sym__bare_dollar;
	v->a[64187] = actions(2393);
	v->a[64188] = 5;
	v->a[64189] = aux_sym_concatenation_token1;
	v->a[64190] = sym_raw_string;
	v->a[64191] = sym_number;
	v->a[64192] = sym__comment_word;
	v->a[64193] = sym_word;
	v->a[64194] = state(867);
	v->a[64195] = 5;
	v->a[64196] = sym_arithmetic_expansion;
	v->a[64197] = sym_string;
	v->a[64198] = sym_simple_expansion;
	v->a[64199] = sym_expansion;
	small_parse_table_3210(v);
}

/* EOF small_parse_table_641.c */
