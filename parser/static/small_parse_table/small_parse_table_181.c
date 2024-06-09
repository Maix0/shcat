/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_181.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_905(t_small_parse_table_array *v)
{
	v->a[18100] = sym_while_statement;
	v->a[18101] = sym_if_statement;
	v->a[18102] = sym_case_statement;
	v->a[18103] = sym_function_definition;
	v->a[18104] = sym_compound_statement;
	v->a[18105] = sym_subshell;
	v->a[18106] = sym_list;
	v->a[18107] = sym_negated_command;
	v->a[18108] = sym_command;
	v->a[18109] = sym_variable_assignments;
	v->a[18110] = 32;
	v->a[18111] = actions(3);
	v->a[18112] = 1;
	v->a[18113] = sym_comment;
	v->a[18114] = actions(9);
	v->a[18115] = 1;
	v->a[18116] = anon_sym_for;
	v->a[18117] = actions(13);
	v->a[18118] = 1;
	v->a[18119] = anon_sym_if;
	small_parse_table_906(v);
}

void	small_parse_table_906(t_small_parse_table_array *v)
{
	v->a[18120] = actions(15);
	v->a[18121] = 1;
	v->a[18122] = anon_sym_case;
	v->a[18123] = actions(17);
	v->a[18124] = 1;
	v->a[18125] = anon_sym_LPAREN;
	v->a[18126] = actions(19);
	v->a[18127] = 1;
	v->a[18128] = anon_sym_LBRACE;
	v->a[18129] = actions(63);
	v->a[18130] = 1;
	v->a[18131] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[18132] = actions(65);
	v->a[18133] = 1;
	v->a[18134] = anon_sym_DOLLAR;
	v->a[18135] = actions(67);
	v->a[18136] = 1;
	v->a[18137] = anon_sym_DQUOTE;
	v->a[18138] = actions(71);
	v->a[18139] = 1;
	small_parse_table_907(v);
}

void	small_parse_table_907(t_small_parse_table_array *v)
{
	v->a[18140] = aux_sym_number_token1;
	v->a[18141] = actions(73);
	v->a[18142] = 1;
	v->a[18143] = aux_sym_number_token2;
	v->a[18144] = actions(75);
	v->a[18145] = 1;
	v->a[18146] = anon_sym_DOLLAR_LBRACE;
	v->a[18147] = actions(77);
	v->a[18148] = 1;
	v->a[18149] = anon_sym_DOLLAR_LPAREN;
	v->a[18150] = actions(79);
	v->a[18151] = 1;
	v->a[18152] = anon_sym_BQUOTE;
	v->a[18153] = actions(349);
	v->a[18154] = 1;
	v->a[18155] = sym_word;
	v->a[18156] = actions(351);
	v->a[18157] = 1;
	v->a[18158] = anon_sym_BANG;
	v->a[18159] = actions(357);
	small_parse_table_908(v);
}

void	small_parse_table_908(t_small_parse_table_array *v)
{
	v->a[18160] = 1;
	v->a[18161] = sym_raw_string;
	v->a[18162] = actions(359);
	v->a[18163] = 1;
	v->a[18164] = sym_file_descriptor;
	v->a[18165] = actions(361);
	v->a[18166] = 1;
	v->a[18167] = sym_variable_name;
	v->a[18168] = state(247);
	v->a[18169] = 1;
	v->a[18170] = sym_command_name;
	v->a[18171] = state(570);
	v->a[18172] = 1;
	v->a[18173] = sym_variable_assignment;
	v->a[18174] = state(582);
	v->a[18175] = 1;
	v->a[18176] = sym_concatenation;
	v->a[18177] = state(585);
	v->a[18178] = 1;
	v->a[18179] = aux_sym_command_repeat1;
	small_parse_table_909(v);
}

void	small_parse_table_909(t_small_parse_table_array *v)
{
	v->a[18180] = state(718);
	v->a[18181] = 1;
	v->a[18182] = sym_file_redirect;
	v->a[18183] = state(1342);
	v->a[18184] = 1;
	v->a[18185] = sym_pipeline;
	v->a[18186] = state(1356);
	v->a[18187] = 1;
	v->a[18188] = aux_sym_redirected_statement_repeat2;
	v->a[18189] = state(2029);
	v->a[18190] = 1;
	v->a[18191] = sym__statement_not_pipeline;
	v->a[18192] = actions(11);
	v->a[18193] = 2;
	v->a[18194] = anon_sym_while;
	v->a[18195] = anon_sym_until;
	v->a[18196] = actions(355);
	v->a[18197] = 2;
	v->a[18198] = anon_sym_LT_AMP_DASH;
	v->a[18199] = anon_sym_GT_AMP_DASH;
	small_parse_table_910(v);
}

/* EOF small_parse_table_181.c */
