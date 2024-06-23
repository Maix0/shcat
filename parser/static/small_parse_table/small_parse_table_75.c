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
	v->a[7500] = state(905);
	v->a[7501] = 1;
	v->a[7502] = sym_file_redirect;
	v->a[7503] = state(1422);
	v->a[7504] = 1;
	v->a[7505] = sym_pipeline;
	v->a[7506] = state(1429);
	v->a[7507] = 1;
	v->a[7508] = aux_sym_redirected_statement_repeat2;
	v->a[7509] = state(2271);
	v->a[7510] = 1;
	v->a[7511] = sym__statement_not_pipeline;
	v->a[7512] = state(2282);
	v->a[7513] = 1;
	v->a[7514] = sym__statements;
	v->a[7515] = actions(11);
	v->a[7516] = 2;
	v->a[7517] = anon_sym_while;
	v->a[7518] = anon_sym_until;
	v->a[7519] = actions(57);
	small_parse_table_376(v);
}

void	small_parse_table_376(t_small_parse_table_array *v)
{
	v->a[7520] = 2;
	v->a[7521] = anon_sym_LT_AMP_DASH;
	v->a[7522] = anon_sym_GT_AMP_DASH;
	v->a[7523] = actions(65);
	v->a[7524] = 2;
	v->a[7525] = sym_raw_string;
	v->a[7526] = sym_number;
	v->a[7527] = state(394);
	v->a[7528] = 5;
	v->a[7529] = sym_arithmetic_expansion;
	v->a[7530] = sym_string;
	v->a[7531] = sym_simple_expansion;
	v->a[7532] = sym_expansion;
	v->a[7533] = sym_command_substitution;
	v->a[7534] = actions(55);
	v->a[7535] = 8;
	v->a[7536] = anon_sym_LT;
	v->a[7537] = anon_sym_GT;
	v->a[7538] = anon_sym_GT_GT;
	v->a[7539] = anon_sym_AMP_GT;
	small_parse_table_377(v);
}

void	small_parse_table_377(t_small_parse_table_array *v)
{
	v->a[7540] = anon_sym_AMP_GT_GT;
	v->a[7541] = anon_sym_LT_AMP;
	v->a[7542] = anon_sym_GT_AMP;
	v->a[7543] = anon_sym_GT_PIPE;
	v->a[7544] = state(1211);
	v->a[7545] = 12;
	v->a[7546] = sym_redirected_statement;
	v->a[7547] = sym_for_statement;
	v->a[7548] = sym_while_statement;
	v->a[7549] = sym_if_statement;
	v->a[7550] = sym_case_statement;
	v->a[7551] = sym_function_definition;
	v->a[7552] = sym_compound_statement;
	v->a[7553] = sym_subshell;
	v->a[7554] = sym_list;
	v->a[7555] = sym_negated_command;
	v->a[7556] = sym_command;
	v->a[7557] = sym__variable_assignments;
	v->a[7558] = 32;
	v->a[7559] = actions(3);
	small_parse_table_378(v);
}

void	small_parse_table_378(t_small_parse_table_array *v)
{
	v->a[7560] = 1;
	v->a[7561] = sym_comment;
	v->a[7562] = actions(9);
	v->a[7563] = 1;
	v->a[7564] = anon_sym_for;
	v->a[7565] = actions(13);
	v->a[7566] = 1;
	v->a[7567] = anon_sym_if;
	v->a[7568] = actions(15);
	v->a[7569] = 1;
	v->a[7570] = anon_sym_case;
	v->a[7571] = actions(17);
	v->a[7572] = 1;
	v->a[7573] = anon_sym_LPAREN;
	v->a[7574] = actions(19);
	v->a[7575] = 1;
	v->a[7576] = anon_sym_LBRACE;
	v->a[7577] = actions(59);
	v->a[7578] = 1;
	v->a[7579] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_379(v);
}

void	small_parse_table_379(t_small_parse_table_array *v)
{
	v->a[7580] = actions(61);
	v->a[7581] = 1;
	v->a[7582] = anon_sym_DOLLAR;
	v->a[7583] = actions(63);
	v->a[7584] = 1;
	v->a[7585] = anon_sym_DQUOTE;
	v->a[7586] = actions(67);
	v->a[7587] = 1;
	v->a[7588] = anon_sym_DOLLAR_LBRACE;
	v->a[7589] = actions(69);
	v->a[7590] = 1;
	v->a[7591] = anon_sym_DOLLAR_LPAREN;
	v->a[7592] = actions(71);
	v->a[7593] = 1;
	v->a[7594] = anon_sym_BQUOTE;
	v->a[7595] = actions(220);
	v->a[7596] = 1;
	v->a[7597] = sym_word;
	v->a[7598] = actions(222);
	v->a[7599] = 1;
	small_parse_table_380(v);
}

/* EOF small_parse_table_75.c */
