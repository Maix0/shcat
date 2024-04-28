/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1260.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6300(t_small_parse_table_array *v)
{
	v->a[126000] = actions(1330);
	v->a[126001] = 27;
	v->a[126002] = sym_file_descriptor;
	v->a[126003] = sym__concat;
	v->a[126004] = sym_variable_name;
	v->a[126005] = sym_test_operator;
	v->a[126006] = sym__brace_start;
	v->a[126007] = anon_sym_LPAREN_LPAREN;
	v->a[126008] = anon_sym_PIPE_PIPE;
	v->a[126009] = anon_sym_AMP_AMP;
	v->a[126010] = anon_sym_GT_GT;
	v->a[126011] = anon_sym_PIPE_AMP;
	v->a[126012] = anon_sym_RBRACK;
	v->a[126013] = anon_sym_AMP_GT_GT;
	v->a[126014] = anon_sym_GT_PIPE;
	v->a[126015] = anon_sym_LT_AMP_DASH;
	v->a[126016] = anon_sym_GT_AMP_DASH;
	v->a[126017] = anon_sym_LT_LT_DASH;
	v->a[126018] = anon_sym_LT_LT_LT;
	v->a[126019] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_6301(v);
}

void	small_parse_table_6301(t_small_parse_table_array *v)
{
	v->a[126020] = anon_sym_DOLLAR_LBRACK;
	v->a[126021] = aux_sym_concatenation_token1;
	v->a[126022] = anon_sym_DQUOTE;
	v->a[126023] = sym_raw_string;
	v->a[126024] = sym_ansi_c_string;
	v->a[126025] = anon_sym_DOLLAR_LBRACE;
	v->a[126026] = anon_sym_DOLLAR_BQUOTE;
	v->a[126027] = anon_sym_LT_LPAREN;
	v->a[126028] = anon_sym_GT_LPAREN;
	v->a[126029] = 3;
	v->a[126030] = actions(71);
	v->a[126031] = 1;
	v->a[126032] = sym_comment;
	v->a[126033] = actions(1320);
	v->a[126034] = 14;
	v->a[126035] = anon_sym_PIPE;
	v->a[126036] = anon_sym_LT;
	v->a[126037] = anon_sym_GT;
	v->a[126038] = anon_sym_LT_LT;
	v->a[126039] = anon_sym_AMP_GT;
	small_parse_table_6302(v);
}

void	small_parse_table_6302(t_small_parse_table_array *v)
{
	v->a[126040] = anon_sym_LT_AMP;
	v->a[126041] = anon_sym_GT_AMP;
	v->a[126042] = anon_sym_DOLLAR;
	v->a[126043] = sym__special_character;
	v->a[126044] = aux_sym_number_token1;
	v->a[126045] = aux_sym_number_token2;
	v->a[126046] = anon_sym_DOLLAR_LPAREN;
	v->a[126047] = anon_sym_BQUOTE;
	v->a[126048] = sym_word;
	v->a[126049] = actions(1322);
	v->a[126050] = 27;
	v->a[126051] = sym_file_descriptor;
	v->a[126052] = sym__concat;
	v->a[126053] = sym_variable_name;
	v->a[126054] = sym_test_operator;
	v->a[126055] = sym__brace_start;
	v->a[126056] = anon_sym_LPAREN_LPAREN;
	v->a[126057] = anon_sym_PIPE_PIPE;
	v->a[126058] = anon_sym_AMP_AMP;
	v->a[126059] = anon_sym_GT_GT;
	small_parse_table_6303(v);
}

void	small_parse_table_6303(t_small_parse_table_array *v)
{
	v->a[126060] = anon_sym_PIPE_AMP;
	v->a[126061] = anon_sym_RBRACK;
	v->a[126062] = anon_sym_AMP_GT_GT;
	v->a[126063] = anon_sym_GT_PIPE;
	v->a[126064] = anon_sym_LT_AMP_DASH;
	v->a[126065] = anon_sym_GT_AMP_DASH;
	v->a[126066] = anon_sym_LT_LT_DASH;
	v->a[126067] = anon_sym_LT_LT_LT;
	v->a[126068] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[126069] = anon_sym_DOLLAR_LBRACK;
	v->a[126070] = aux_sym_concatenation_token1;
	v->a[126071] = anon_sym_DQUOTE;
	v->a[126072] = sym_raw_string;
	v->a[126073] = sym_ansi_c_string;
	v->a[126074] = anon_sym_DOLLAR_LBRACE;
	v->a[126075] = anon_sym_DOLLAR_BQUOTE;
	v->a[126076] = anon_sym_LT_LPAREN;
	v->a[126077] = anon_sym_GT_LPAREN;
	v->a[126078] = 3;
	v->a[126079] = actions(71);
	small_parse_table_6304(v);
}

void	small_parse_table_6304(t_small_parse_table_array *v)
{
	v->a[126080] = 1;
	v->a[126081] = sym_comment;
	v->a[126082] = actions(1251);
	v->a[126083] = 14;
	v->a[126084] = anon_sym_PIPE;
	v->a[126085] = anon_sym_LT;
	v->a[126086] = anon_sym_GT;
	v->a[126087] = anon_sym_LT_LT;
	v->a[126088] = anon_sym_AMP_GT;
	v->a[126089] = anon_sym_LT_AMP;
	v->a[126090] = anon_sym_GT_AMP;
	v->a[126091] = anon_sym_DOLLAR;
	v->a[126092] = sym__special_character;
	v->a[126093] = aux_sym_number_token1;
	v->a[126094] = aux_sym_number_token2;
	v->a[126095] = anon_sym_DOLLAR_LPAREN;
	v->a[126096] = anon_sym_BQUOTE;
	v->a[126097] = sym_word;
	v->a[126098] = actions(1253);
	v->a[126099] = 27;
	small_parse_table_6305(v);
}

/* EOF small_parse_table_1260.c */
