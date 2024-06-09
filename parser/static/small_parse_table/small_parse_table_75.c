/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_75.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_375(t_small_parse_table_array *v)
{
	v->a[7500] = anon_sym_LT_AMP_DASH;
	v->a[7501] = anon_sym_GT_AMP_DASH;
	v->a[7502] = state(295);
	v->a[7503] = 6;
	v->a[7504] = sym_arithmetic_expansion;
	v->a[7505] = sym_string;
	v->a[7506] = sym_number;
	v->a[7507] = sym_simple_expansion;
	v->a[7508] = sym_expansion;
	v->a[7509] = sym_command_substitution;
	v->a[7510] = actions(252);
	v->a[7511] = 8;
	v->a[7512] = anon_sym_LT;
	v->a[7513] = anon_sym_GT;
	v->a[7514] = anon_sym_GT_GT;
	v->a[7515] = anon_sym_AMP_GT;
	v->a[7516] = anon_sym_AMP_GT_GT;
	v->a[7517] = anon_sym_LT_AMP;
	v->a[7518] = anon_sym_GT_AMP;
	v->a[7519] = anon_sym_GT_PIPE;
	small_parse_table_376(v);
}

void	small_parse_table_376(t_small_parse_table_array *v)
{
	v->a[7520] = state(1031);
	v->a[7521] = 12;
	v->a[7522] = sym_redirected_statement;
	v->a[7523] = sym_for_statement;
	v->a[7524] = sym_while_statement;
	v->a[7525] = sym_if_statement;
	v->a[7526] = sym_case_statement;
	v->a[7527] = sym_function_definition;
	v->a[7528] = sym_compound_statement;
	v->a[7529] = sym_subshell;
	v->a[7530] = sym_list;
	v->a[7531] = sym_negated_command;
	v->a[7532] = sym_command;
	v->a[7533] = sym_variable_assignments;
	v->a[7534] = 34;
	v->a[7535] = actions(3);
	v->a[7536] = 1;
	v->a[7537] = sym_comment;
	v->a[7538] = actions(9);
	v->a[7539] = 1;
	small_parse_table_377(v);
}

void	small_parse_table_377(t_small_parse_table_array *v)
{
	v->a[7540] = anon_sym_for;
	v->a[7541] = actions(13);
	v->a[7542] = 1;
	v->a[7543] = anon_sym_if;
	v->a[7544] = actions(15);
	v->a[7545] = 1;
	v->a[7546] = anon_sym_case;
	v->a[7547] = actions(17);
	v->a[7548] = 1;
	v->a[7549] = anon_sym_LPAREN;
	v->a[7550] = actions(19);
	v->a[7551] = 1;
	v->a[7552] = anon_sym_LBRACE;
	v->a[7553] = actions(63);
	v->a[7554] = 1;
	v->a[7555] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[7556] = actions(65);
	v->a[7557] = 1;
	v->a[7558] = anon_sym_DOLLAR;
	v->a[7559] = actions(67);
	small_parse_table_378(v);
}

void	small_parse_table_378(t_small_parse_table_array *v)
{
	v->a[7560] = 1;
	v->a[7561] = anon_sym_DQUOTE;
	v->a[7562] = actions(69);
	v->a[7563] = 1;
	v->a[7564] = sym_raw_string;
	v->a[7565] = actions(71);
	v->a[7566] = 1;
	v->a[7567] = aux_sym_number_token1;
	v->a[7568] = actions(73);
	v->a[7569] = 1;
	v->a[7570] = aux_sym_number_token2;
	v->a[7571] = actions(75);
	v->a[7572] = 1;
	v->a[7573] = anon_sym_DOLLAR_LBRACE;
	v->a[7574] = actions(77);
	v->a[7575] = 1;
	v->a[7576] = anon_sym_DOLLAR_LPAREN;
	v->a[7577] = actions(79);
	v->a[7578] = 1;
	v->a[7579] = anon_sym_BQUOTE;
	small_parse_table_379(v);
}

void	small_parse_table_379(t_small_parse_table_array *v)
{
	v->a[7580] = actions(81);
	v->a[7581] = 1;
	v->a[7582] = sym_file_descriptor;
	v->a[7583] = actions(83);
	v->a[7584] = 1;
	v->a[7585] = sym_variable_name;
	v->a[7586] = actions(238);
	v->a[7587] = 1;
	v->a[7588] = sym_word;
	v->a[7589] = actions(240);
	v->a[7590] = 1;
	v->a[7591] = anon_sym_BANG;
	v->a[7592] = state(132);
	v->a[7593] = 1;
	v->a[7594] = aux_sym__statements_repeat1;
	v->a[7595] = state(185);
	v->a[7596] = 1;
	v->a[7597] = sym_command_name;
	v->a[7598] = state(297);
	v->a[7599] = 1;
	small_parse_table_380(v);
}

/* EOF small_parse_table_75.c */
