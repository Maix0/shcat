/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_581.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2905(t_small_parse_table_array *v)
{
	v->a[58100] = anon_sym_LT_AMP_DASH;
	v->a[58101] = anon_sym_GT_AMP_DASH;
	v->a[58102] = anon_sym_LT_LT;
	v->a[58103] = anon_sym_LT_LT_DASH;
	v->a[58104] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[58105] = anon_sym_DOLLAR;
	v->a[58106] = anon_sym_DQUOTE;
	v->a[58107] = sym_raw_string;
	v->a[58108] = sym_number;
	v->a[58109] = anon_sym_DOLLAR_LBRACE;
	v->a[58110] = anon_sym_DOLLAR_LPAREN;
	v->a[58111] = anon_sym_BQUOTE;
	v->a[58112] = sym_word;
	v->a[58113] = 6;
	v->a[58114] = actions(3);
	v->a[58115] = 1;
	v->a[58116] = sym_comment;
	v->a[58117] = actions(1174);
	v->a[58118] = 1;
	v->a[58119] = sym_file_descriptor;
	small_parse_table_2906(v);
}

void	small_parse_table_2906(t_small_parse_table_array *v)
{
	v->a[58120] = actions(1987);
	v->a[58121] = 1;
	v->a[58122] = aux_sym_concatenation_token1;
	v->a[58123] = actions(1989);
	v->a[58124] = 1;
	v->a[58125] = sym__concat;
	v->a[58126] = state(1001);
	v->a[58127] = 1;
	v->a[58128] = aux_sym_concatenation_repeat1;
	v->a[58129] = actions(1172);
	v->a[58130] = 22;
	v->a[58131] = anon_sym_AMP_AMP;
	v->a[58132] = anon_sym_PIPE_PIPE;
	v->a[58133] = anon_sym_LT;
	v->a[58134] = anon_sym_GT;
	v->a[58135] = anon_sym_GT_GT;
	v->a[58136] = anon_sym_AMP_GT;
	v->a[58137] = anon_sym_AMP_GT_GT;
	v->a[58138] = anon_sym_LT_AMP;
	v->a[58139] = anon_sym_GT_AMP;
	small_parse_table_2907(v);
}

void	small_parse_table_2907(t_small_parse_table_array *v)
{
	v->a[58140] = anon_sym_GT_PIPE;
	v->a[58141] = anon_sym_LT_AMP_DASH;
	v->a[58142] = anon_sym_GT_AMP_DASH;
	v->a[58143] = aux_sym_heredoc_redirect_token1;
	v->a[58144] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[58145] = anon_sym_DOLLAR;
	v->a[58146] = anon_sym_DQUOTE;
	v->a[58147] = sym_raw_string;
	v->a[58148] = sym_number;
	v->a[58149] = anon_sym_DOLLAR_LBRACE;
	v->a[58150] = anon_sym_DOLLAR_LPAREN;
	v->a[58151] = anon_sym_BQUOTE;
	v->a[58152] = sym_word;
	v->a[58153] = 15;
	v->a[58154] = actions(1074);
	v->a[58155] = 1;
	v->a[58156] = sym_comment;
	v->a[58157] = actions(1951);
	v->a[58158] = 1;
	v->a[58159] = anon_sym_LPAREN;
	small_parse_table_2908(v);
}

void	small_parse_table_2908(t_small_parse_table_array *v)
{
	v->a[58160] = actions(1953);
	v->a[58161] = 1;
	v->a[58162] = anon_sym_BANG;
	v->a[58163] = actions(1959);
	v->a[58164] = 1;
	v->a[58165] = anon_sym_TILDE;
	v->a[58166] = actions(1961);
	v->a[58167] = 1;
	v->a[58168] = anon_sym_DOLLAR;
	v->a[58169] = actions(1963);
	v->a[58170] = 1;
	v->a[58171] = anon_sym_DQUOTE;
	v->a[58172] = actions(1967);
	v->a[58173] = 1;
	v->a[58174] = anon_sym_DOLLAR_LBRACE;
	v->a[58175] = actions(1969);
	v->a[58176] = 1;
	v->a[58177] = anon_sym_DOLLAR_LPAREN;
	v->a[58178] = actions(1971);
	v->a[58179] = 1;
	small_parse_table_2909(v);
}

void	small_parse_table_2909(t_small_parse_table_array *v)
{
	v->a[58180] = anon_sym_BQUOTE;
	v->a[58181] = actions(1973);
	v->a[58182] = 1;
	v->a[58183] = sym_variable_name;
	v->a[58184] = actions(1955);
	v->a[58185] = 2;
	v->a[58186] = anon_sym_PLUS_PLUS;
	v->a[58187] = anon_sym_DASH_DASH;
	v->a[58188] = actions(1957);
	v->a[58189] = 2;
	v->a[58190] = anon_sym_DASH2;
	v->a[58191] = anon_sym_PLUS2;
	v->a[58192] = actions(1965);
	v->a[58193] = 2;
	v->a[58194] = sym_number;
	v->a[58195] = aux_sym__simple_variable_name_token1;
	v->a[58196] = state(462);
	v->a[58197] = 3;
	v->a[58198] = sym_string;
	v->a[58199] = sym_simple_expansion;
	small_parse_table_2910(v);
}

/* EOF small_parse_table_581.c */
