/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_740.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3700(t_small_parse_table_array *v)
{
	v->a[74000] = 5;
	v->a[74001] = aux_sym_concatenation_token1;
	v->a[74002] = sym_raw_string;
	v->a[74003] = sym_number;
	v->a[74004] = sym__comment_word;
	v->a[74005] = sym_word;
	v->a[74006] = state(424);
	v->a[74007] = 5;
	v->a[74008] = sym_arithmetic_expansion;
	v->a[74009] = sym_string;
	v->a[74010] = sym_simple_expansion;
	v->a[74011] = sym_expansion;
	v->a[74012] = sym_command_substitution;
	v->a[74013] = 10;
	v->a[74014] = actions(3);
	v->a[74015] = 1;
	v->a[74016] = sym_comment;
	v->a[74017] = actions(345);
	v->a[74018] = 1;
	v->a[74019] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_3701(v);
}

void	small_parse_table_3701(t_small_parse_table_array *v)
{
	v->a[74020] = actions(349);
	v->a[74021] = 1;
	v->a[74022] = anon_sym_DQUOTE;
	v->a[74023] = actions(353);
	v->a[74024] = 1;
	v->a[74025] = anon_sym_DOLLAR_LBRACE;
	v->a[74026] = actions(355);
	v->a[74027] = 1;
	v->a[74028] = anon_sym_DOLLAR_LPAREN;
	v->a[74029] = actions(357);
	v->a[74030] = 1;
	v->a[74031] = anon_sym_BQUOTE;
	v->a[74032] = actions(2617);
	v->a[74033] = 1;
	v->a[74034] = anon_sym_DOLLAR;
	v->a[74035] = actions(2619);
	v->a[74036] = 1;
	v->a[74037] = sym__bare_dollar;
	v->a[74038] = actions(2615);
	v->a[74039] = 5;
	small_parse_table_3702(v);
}

void	small_parse_table_3702(t_small_parse_table_array *v)
{
	v->a[74040] = aux_sym_concatenation_token1;
	v->a[74041] = sym_raw_string;
	v->a[74042] = sym_number;
	v->a[74043] = sym__comment_word;
	v->a[74044] = sym_word;
	v->a[74045] = state(845);
	v->a[74046] = 5;
	v->a[74047] = sym_arithmetic_expansion;
	v->a[74048] = sym_string;
	v->a[74049] = sym_simple_expansion;
	v->a[74050] = sym_expansion;
	v->a[74051] = sym_command_substitution;
	v->a[74052] = 3;
	v->a[74053] = actions(870);
	v->a[74054] = 1;
	v->a[74055] = sym_comment;
	v->a[74056] = actions(1025);
	v->a[74057] = 6;
	v->a[74058] = anon_sym_PIPE;
	v->a[74059] = anon_sym_LT;
	small_parse_table_3703(v);
}

void	small_parse_table_3703(t_small_parse_table_array *v)
{
	v->a[74060] = anon_sym_GT;
	v->a[74061] = anon_sym_LT_AMP;
	v->a[74062] = anon_sym_GT_AMP;
	v->a[74063] = anon_sym_LT_LT;
	v->a[74064] = actions(1027);
	v->a[74065] = 11;
	v->a[74066] = sym_file_descriptor;
	v->a[74067] = sym__concat;
	v->a[74068] = sym_variable_name;
	v->a[74069] = anon_sym_AMP_AMP;
	v->a[74070] = anon_sym_PIPE_PIPE;
	v->a[74071] = anon_sym_GT_GT;
	v->a[74072] = anon_sym_GT_PIPE;
	v->a[74073] = anon_sym_LT_AMP_DASH;
	v->a[74074] = anon_sym_GT_AMP_DASH;
	v->a[74075] = anon_sym_LT_LT_DASH;
	v->a[74076] = aux_sym_concatenation_token1;
	v->a[74077] = 10;
	v->a[74078] = actions(3);
	v->a[74079] = 1;
	small_parse_table_3704(v);
}

void	small_parse_table_3704(t_small_parse_table_array *v)
{
	v->a[74080] = sym_comment;
	v->a[74081] = actions(717);
	v->a[74082] = 1;
	v->a[74083] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[74084] = actions(719);
	v->a[74085] = 1;
	v->a[74086] = anon_sym_DOLLAR;
	v->a[74087] = actions(721);
	v->a[74088] = 1;
	v->a[74089] = anon_sym_DQUOTE;
	v->a[74090] = actions(723);
	v->a[74091] = 1;
	v->a[74092] = anon_sym_DOLLAR_LBRACE;
	v->a[74093] = actions(725);
	v->a[74094] = 1;
	v->a[74095] = anon_sym_DOLLAR_LPAREN;
	v->a[74096] = actions(727);
	v->a[74097] = 1;
	v->a[74098] = anon_sym_BQUOTE;
	v->a[74099] = actions(2623);
	small_parse_table_3705(v);
}

/* EOF small_parse_table_740.c */
