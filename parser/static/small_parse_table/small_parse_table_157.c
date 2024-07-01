/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_157.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_785(t_small_parse_table_array *v)
{
	v->a[15700] = sym_negated_command;
	v->a[15701] = sym_command;
	v->a[15702] = sym__variable_assignments;
	v->a[15703] = 31;
	v->a[15704] = actions(3);
	v->a[15705] = 1;
	v->a[15706] = sym_comment;
	v->a[15707] = actions(268);
	v->a[15708] = 1;
	v->a[15709] = sym_word;
	v->a[15710] = actions(271);
	v->a[15711] = 1;
	v->a[15712] = anon_sym_for;
	v->a[15713] = actions(277);
	v->a[15714] = 1;
	v->a[15715] = anon_sym_if;
	v->a[15716] = actions(280);
	v->a[15717] = 1;
	v->a[15718] = anon_sym_case;
	v->a[15719] = actions(283);
	small_parse_table_786(v);
}

void	small_parse_table_786(t_small_parse_table_array *v)
{
	v->a[15720] = 1;
	v->a[15721] = anon_sym_LPAREN;
	v->a[15722] = actions(286);
	v->a[15723] = 1;
	v->a[15724] = anon_sym_LBRACE;
	v->a[15725] = actions(289);
	v->a[15726] = 1;
	v->a[15727] = anon_sym_BANG;
	v->a[15728] = actions(298);
	v->a[15729] = 1;
	v->a[15730] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[15731] = actions(301);
	v->a[15732] = 1;
	v->a[15733] = anon_sym_DOLLAR;
	v->a[15734] = actions(304);
	v->a[15735] = 1;
	v->a[15736] = anon_sym_DQUOTE;
	v->a[15737] = actions(310);
	v->a[15738] = 1;
	v->a[15739] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_787(v);
}

void	small_parse_table_787(t_small_parse_table_array *v)
{
	v->a[15740] = actions(313);
	v->a[15741] = 1;
	v->a[15742] = anon_sym_DOLLAR_LPAREN;
	v->a[15743] = actions(316);
	v->a[15744] = 1;
	v->a[15745] = anon_sym_BQUOTE;
	v->a[15746] = actions(319);
	v->a[15747] = 1;
	v->a[15748] = sym_file_descriptor;
	v->a[15749] = actions(322);
	v->a[15750] = 1;
	v->a[15751] = sym_variable_name;
	v->a[15752] = state(131);
	v->a[15753] = 1;
	v->a[15754] = aux_sym__statements_repeat1;
	v->a[15755] = state(189);
	v->a[15756] = 1;
	v->a[15757] = sym_command_name;
	v->a[15758] = state(292);
	v->a[15759] = 1;
	small_parse_table_788(v);
}

void	small_parse_table_788(t_small_parse_table_array *v)
{
	v->a[15760] = sym_variable_assignment;
	v->a[15761] = state(650);
	v->a[15762] = 1;
	v->a[15763] = sym_concatenation;
	v->a[15764] = state(712);
	v->a[15765] = 1;
	v->a[15766] = sym_file_redirect;
	v->a[15767] = state(713);
	v->a[15768] = 1;
	v->a[15769] = aux_sym_command_repeat1;
	v->a[15770] = state(1267);
	v->a[15771] = 1;
	v->a[15772] = sym_pipeline;
	v->a[15773] = state(1333);
	v->a[15774] = 1;
	v->a[15775] = aux_sym_redirected_statement_repeat2;
	v->a[15776] = state(2103);
	v->a[15777] = 1;
	v->a[15778] = sym__statement_not_pipeline;
	v->a[15779] = actions(274);
	small_parse_table_789(v);
}

void	small_parse_table_789(t_small_parse_table_array *v)
{
	v->a[15780] = 2;
	v->a[15781] = anon_sym_while;
	v->a[15782] = anon_sym_until;
	v->a[15783] = actions(295);
	v->a[15784] = 2;
	v->a[15785] = anon_sym_LT_AMP_DASH;
	v->a[15786] = anon_sym_GT_AMP_DASH;
	v->a[15787] = actions(307);
	v->a[15788] = 2;
	v->a[15789] = sym_raw_string;
	v->a[15790] = sym_number;
	v->a[15791] = state(443);
	v->a[15792] = 5;
	v->a[15793] = sym_arithmetic_expansion;
	v->a[15794] = sym_string;
	v->a[15795] = sym_simple_expansion;
	v->a[15796] = sym_expansion;
	v->a[15797] = sym_command_substitution;
	v->a[15798] = actions(292);
	v->a[15799] = 6;
	small_parse_table_790(v);
}

/* EOF small_parse_table_157.c */
