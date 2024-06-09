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
	v->a[58100] = actions(2121);
	v->a[58101] = 1;
	v->a[58102] = anon_sym_DOLLAR;
	v->a[58103] = actions(2123);
	v->a[58104] = 1;
	v->a[58105] = anon_sym_DQUOTE;
	v->a[58106] = actions(2125);
	v->a[58107] = 1;
	v->a[58108] = aux_sym_number_token1;
	v->a[58109] = actions(2127);
	v->a[58110] = 1;
	v->a[58111] = aux_sym_number_token2;
	v->a[58112] = actions(2129);
	v->a[58113] = 1;
	v->a[58114] = anon_sym_DOLLAR_LBRACE;
	v->a[58115] = actions(2131);
	v->a[58116] = 1;
	v->a[58117] = anon_sym_DOLLAR_LPAREN;
	v->a[58118] = actions(2133);
	v->a[58119] = 1;
	small_parse_table_2906(v);
}

void	small_parse_table_2906(t_small_parse_table_array *v)
{
	v->a[58120] = anon_sym_BQUOTE;
	v->a[58121] = actions(2135);
	v->a[58122] = 1;
	v->a[58123] = sym_extglob_pattern;
	v->a[58124] = actions(2143);
	v->a[58125] = 1;
	v->a[58126] = anon_sym_esac;
	v->a[58127] = state(1116);
	v->a[58128] = 1;
	v->a[58129] = aux_sym_case_statement_repeat1;
	v->a[58130] = state(1786);
	v->a[58131] = 1;
	v->a[58132] = sym_case_item;
	v->a[58133] = state(2204);
	v->a[58134] = 1;
	v->a[58135] = sym__case_item_last;
	v->a[58136] = actions(2111);
	v->a[58137] = 2;
	v->a[58138] = sym_raw_string;
	v->a[58139] = sym_word;
	small_parse_table_2907(v);
}

void	small_parse_table_2907(t_small_parse_table_array *v)
{
	v->a[58140] = state(2016);
	v->a[58141] = 2;
	v->a[58142] = sym_concatenation;
	v->a[58143] = sym__extglob_blob;
	v->a[58144] = actions(2145);
	v->a[58145] = 4;
	v->a[58146] = anon_sym_SEMI_SEMI;
	v->a[58147] = aux_sym_heredoc_redirect_token1;
	v->a[58148] = anon_sym_AMP;
	v->a[58149] = anon_sym_SEMI;
	v->a[58150] = state(1896);
	v->a[58151] = 6;
	v->a[58152] = sym_arithmetic_expansion;
	v->a[58153] = sym_string;
	v->a[58154] = sym_number;
	v->a[58155] = sym_simple_expansion;
	v->a[58156] = sym_expansion;
	v->a[58157] = sym_command_substitution;
	v->a[58158] = 17;
	v->a[58159] = actions(1404);
	small_parse_table_2908(v);
}

void	small_parse_table_2908(t_small_parse_table_array *v)
{
	v->a[58160] = 1;
	v->a[58161] = sym_comment;
	v->a[58162] = actions(1979);
	v->a[58163] = 1;
	v->a[58164] = anon_sym_LPAREN;
	v->a[58165] = actions(1981);
	v->a[58166] = 1;
	v->a[58167] = anon_sym_BANG;
	v->a[58168] = actions(1989);
	v->a[58169] = 1;
	v->a[58170] = anon_sym_TILDE;
	v->a[58171] = actions(1991);
	v->a[58172] = 1;
	v->a[58173] = anon_sym_DOLLAR;
	v->a[58174] = actions(1993);
	v->a[58175] = 1;
	v->a[58176] = anon_sym_DQUOTE;
	v->a[58177] = actions(1995);
	v->a[58178] = 1;
	v->a[58179] = aux_sym_number_token1;
	small_parse_table_2909(v);
}

void	small_parse_table_2909(t_small_parse_table_array *v)
{
	v->a[58180] = actions(1997);
	v->a[58181] = 1;
	v->a[58182] = aux_sym_number_token2;
	v->a[58183] = actions(1999);
	v->a[58184] = 1;
	v->a[58185] = anon_sym_DOLLAR_LBRACE;
	v->a[58186] = actions(2001);
	v->a[58187] = 1;
	v->a[58188] = anon_sym_DOLLAR_LPAREN;
	v->a[58189] = actions(2003);
	v->a[58190] = 1;
	v->a[58191] = anon_sym_BQUOTE;
	v->a[58192] = actions(2005);
	v->a[58193] = 1;
	v->a[58194] = aux_sym__simple_variable_name_token1;
	v->a[58195] = actions(2007);
	v->a[58196] = 1;
	v->a[58197] = sym_variable_name;
	v->a[58198] = actions(1985);
	v->a[58199] = 2;
	small_parse_table_2910(v);
}

/* EOF small_parse_table_581.c */
