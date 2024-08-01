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
	v->a[7500] = 1;
	v->a[7501] = sym_comment;
	v->a[7502] = actions(9);
	v->a[7503] = 1;
	v->a[7504] = anon_sym_for;
	v->a[7505] = actions(13);
	v->a[7506] = 1;
	v->a[7507] = anon_sym_if;
	v->a[7508] = actions(15);
	v->a[7509] = 1;
	v->a[7510] = anon_sym_case;
	v->a[7511] = actions(17);
	v->a[7512] = 1;
	v->a[7513] = anon_sym_LPAREN;
	v->a[7514] = actions(19);
	v->a[7515] = 1;
	v->a[7516] = anon_sym_LBRACE;
	v->a[7517] = actions(53);
	v->a[7518] = 1;
	v->a[7519] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_376(v);
}

void	small_parse_table_376(t_small_parse_table_array *v)
{
	v->a[7520] = actions(55);
	v->a[7521] = 1;
	v->a[7522] = anon_sym_DOLLAR;
	v->a[7523] = actions(57);
	v->a[7524] = 1;
	v->a[7525] = anon_sym_DQUOTE;
	v->a[7526] = actions(61);
	v->a[7527] = 1;
	v->a[7528] = anon_sym_DOLLAR_LBRACE;
	v->a[7529] = actions(63);
	v->a[7530] = 1;
	v->a[7531] = anon_sym_DOLLAR_LPAREN;
	v->a[7532] = actions(65);
	v->a[7533] = 1;
	v->a[7534] = anon_sym_BQUOTE;
	v->a[7535] = actions(67);
	v->a[7536] = 1;
	v->a[7537] = sym_variable_name;
	v->a[7538] = actions(204);
	v->a[7539] = 1;
	small_parse_table_377(v);
}

void	small_parse_table_377(t_small_parse_table_array *v)
{
	v->a[7540] = sym_word;
	v->a[7541] = actions(206);
	v->a[7542] = 1;
	v->a[7543] = anon_sym_BANG;
	v->a[7544] = state(116);
	v->a[7545] = 1;
	v->a[7546] = aux_sym__statements_repeat1;
	v->a[7547] = state(179);
	v->a[7548] = 1;
	v->a[7549] = sym_command_name;
	v->a[7550] = state(208);
	v->a[7551] = 1;
	v->a[7552] = sym_variable_assignment;
	v->a[7553] = state(385);
	v->a[7554] = 1;
	v->a[7555] = aux_sym_command_repeat1;
	v->a[7556] = state(555);
	v->a[7557] = 1;
	v->a[7558] = sym_concatenation;
	v->a[7559] = state(599);
	small_parse_table_378(v);
}

void	small_parse_table_378(t_small_parse_table_array *v)
{
	v->a[7560] = 1;
	v->a[7561] = sym_file_redirect;
	v->a[7562] = state(969);
	v->a[7563] = 1;
	v->a[7564] = sym_pipeline;
	v->a[7565] = state(1006);
	v->a[7566] = 1;
	v->a[7567] = aux_sym_redirected_statement_repeat2;
	v->a[7568] = state(1560);
	v->a[7569] = 1;
	v->a[7570] = sym__statement_not_pipeline;
	v->a[7571] = state(1733);
	v->a[7572] = 1;
	v->a[7573] = sym__statements;
	v->a[7574] = actions(11);
	v->a[7575] = 2;
	v->a[7576] = anon_sym_while;
	v->a[7577] = anon_sym_until;
	v->a[7578] = actions(59);
	v->a[7579] = 2;
	small_parse_table_379(v);
}

void	small_parse_table_379(t_small_parse_table_array *v)
{
	v->a[7580] = sym_raw_string;
	v->a[7581] = sym_number;
	v->a[7582] = actions(51);
	v->a[7583] = 3;
	v->a[7584] = anon_sym_LT;
	v->a[7585] = anon_sym_GT;
	v->a[7586] = anon_sym_GT_GT;
	v->a[7587] = state(401);
	v->a[7588] = 5;
	v->a[7589] = sym_arithmetic_expansion;
	v->a[7590] = sym_string;
	v->a[7591] = sym_simple_expansion;
	v->a[7592] = sym_expansion;
	v->a[7593] = sym_command_substitution;
	v->a[7594] = state(820);
	v->a[7595] = 12;
	v->a[7596] = sym_redirected_statement;
	v->a[7597] = sym_for_statement;
	v->a[7598] = sym_while_statement;
	v->a[7599] = sym_if_statement;
	small_parse_table_380(v);
}

/* EOF small_parse_table_75.c */
