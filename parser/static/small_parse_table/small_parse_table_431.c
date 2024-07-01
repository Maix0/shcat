/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_431.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2155(t_small_parse_table_array *v)
{
	v->a[43100] = anon_sym_DOLLAR;
	v->a[43101] = anon_sym_DQUOTE;
	v->a[43102] = sym_raw_string;
	v->a[43103] = sym_number;
	v->a[43104] = anon_sym_DOLLAR_LBRACE;
	v->a[43105] = anon_sym_DOLLAR_LPAREN;
	v->a[43106] = anon_sym_BQUOTE;
	v->a[43107] = sym_word;
	v->a[43108] = anon_sym_SEMI;
	v->a[43109] = 3;
	v->a[43110] = actions(3);
	v->a[43111] = 1;
	v->a[43112] = sym_comment;
	v->a[43113] = actions(1095);
	v->a[43114] = 2;
	v->a[43115] = sym_file_descriptor;
	v->a[43116] = sym__bare_dollar;
	v->a[43117] = actions(1097);
	v->a[43118] = 28;
	v->a[43119] = anon_sym_esac;
	small_parse_table_2156(v);
}

void	small_parse_table_2156(t_small_parse_table_array *v)
{
	v->a[43120] = anon_sym_LPAREN;
	v->a[43121] = anon_sym_PIPE;
	v->a[43122] = anon_sym_SEMI_SEMI;
	v->a[43123] = anon_sym_AMP_AMP;
	v->a[43124] = anon_sym_PIPE_PIPE;
	v->a[43125] = anon_sym_LT;
	v->a[43126] = anon_sym_GT;
	v->a[43127] = anon_sym_GT_GT;
	v->a[43128] = anon_sym_LT_AMP;
	v->a[43129] = anon_sym_GT_AMP;
	v->a[43130] = anon_sym_GT_PIPE;
	v->a[43131] = anon_sym_LT_AMP_DASH;
	v->a[43132] = anon_sym_GT_AMP_DASH;
	v->a[43133] = anon_sym_LT_LT;
	v->a[43134] = anon_sym_LT_LT_DASH;
	v->a[43135] = aux_sym_heredoc_redirect_token1;
	v->a[43136] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[43137] = anon_sym_AMP;
	v->a[43138] = anon_sym_DOLLAR;
	v->a[43139] = anon_sym_DQUOTE;
	small_parse_table_2157(v);
}

void	small_parse_table_2157(t_small_parse_table_array *v)
{
	v->a[43140] = sym_raw_string;
	v->a[43141] = sym_number;
	v->a[43142] = anon_sym_DOLLAR_LBRACE;
	v->a[43143] = anon_sym_DOLLAR_LPAREN;
	v->a[43144] = anon_sym_BQUOTE;
	v->a[43145] = sym_word;
	v->a[43146] = anon_sym_SEMI;
	v->a[43147] = 6;
	v->a[43148] = actions(3);
	v->a[43149] = 1;
	v->a[43150] = sym_comment;
	v->a[43151] = actions(379);
	v->a[43152] = 1;
	v->a[43153] = sym_file_descriptor;
	v->a[43154] = actions(1381);
	v->a[43155] = 1;
	v->a[43156] = sym_variable_name;
	v->a[43157] = actions(1379);
	v->a[43158] = 2;
	v->a[43159] = aux_sym__simple_variable_name_token1;
	small_parse_table_2158(v);
}

void	small_parse_table_2158(t_small_parse_table_array *v)
{
	v->a[43160] = aux_sym__multiline_variable_name_token1;
	v->a[43161] = actions(1377);
	v->a[43162] = 9;
	v->a[43163] = anon_sym_BANG;
	v->a[43164] = anon_sym_DASH;
	v->a[43165] = anon_sym_STAR;
	v->a[43166] = anon_sym_QMARK;
	v->a[43167] = anon_sym_DOLLAR;
	v->a[43168] = anon_sym_POUND;
	v->a[43169] = anon_sym_AT;
	v->a[43170] = anon_sym_0;
	v->a[43171] = anon_sym__;
	v->a[43172] = actions(381);
	v->a[43173] = 17;
	v->a[43174] = anon_sym_PIPE;
	v->a[43175] = anon_sym_SEMI_SEMI;
	v->a[43176] = anon_sym_AMP_AMP;
	v->a[43177] = anon_sym_PIPE_PIPE;
	v->a[43178] = anon_sym_LT;
	v->a[43179] = anon_sym_GT;
	small_parse_table_2159(v);
}

void	small_parse_table_2159(t_small_parse_table_array *v)
{
	v->a[43180] = anon_sym_GT_GT;
	v->a[43181] = anon_sym_LT_AMP;
	v->a[43182] = anon_sym_GT_AMP;
	v->a[43183] = anon_sym_GT_PIPE;
	v->a[43184] = anon_sym_LT_AMP_DASH;
	v->a[43185] = anon_sym_GT_AMP_DASH;
	v->a[43186] = anon_sym_LT_LT;
	v->a[43187] = anon_sym_LT_LT_DASH;
	v->a[43188] = aux_sym_heredoc_redirect_token1;
	v->a[43189] = anon_sym_AMP;
	v->a[43190] = anon_sym_SEMI;
	v->a[43191] = 3;
	v->a[43192] = actions(3);
	v->a[43193] = 1;
	v->a[43194] = sym_comment;
	v->a[43195] = actions(1037);
	v->a[43196] = 3;
	v->a[43197] = sym_file_descriptor;
	v->a[43198] = sym__concat;
	v->a[43199] = ts_builtin_sym_end;
	small_parse_table_2160(v);
}

/* EOF small_parse_table_431.c */
