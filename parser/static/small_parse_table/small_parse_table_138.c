/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_138.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_690(t_small_parse_table_array *v)
{
	v->a[13800] = sym_while_statement;
	v->a[13801] = sym_if_statement;
	v->a[13802] = sym_case_statement;
	v->a[13803] = sym_function_definition;
	v->a[13804] = sym_compound_statement;
	v->a[13805] = sym_subshell;
	v->a[13806] = sym_list;
	v->a[13807] = sym_negated_command;
	v->a[13808] = sym_command;
	v->a[13809] = sym__variable_assignments;
	v->a[13810] = 30;
	v->a[13811] = actions(3);
	v->a[13812] = 1;
	v->a[13813] = sym_comment;
	v->a[13814] = actions(257);
	v->a[13815] = 1;
	v->a[13816] = sym_word;
	v->a[13817] = actions(260);
	v->a[13818] = 1;
	v->a[13819] = anon_sym_for;
	small_parse_table_691(v);
}

void	small_parse_table_691(t_small_parse_table_array *v)
{
	v->a[13820] = actions(266);
	v->a[13821] = 1;
	v->a[13822] = anon_sym_if;
	v->a[13823] = actions(269);
	v->a[13824] = 1;
	v->a[13825] = anon_sym_case;
	v->a[13826] = actions(272);
	v->a[13827] = 1;
	v->a[13828] = anon_sym_LPAREN;
	v->a[13829] = actions(275);
	v->a[13830] = 1;
	v->a[13831] = anon_sym_LBRACE;
	v->a[13832] = actions(278);
	v->a[13833] = 1;
	v->a[13834] = anon_sym_BANG;
	v->a[13835] = actions(284);
	v->a[13836] = 1;
	v->a[13837] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[13838] = actions(287);
	v->a[13839] = 1;
	small_parse_table_692(v);
}

void	small_parse_table_692(t_small_parse_table_array *v)
{
	v->a[13840] = anon_sym_DOLLAR;
	v->a[13841] = actions(290);
	v->a[13842] = 1;
	v->a[13843] = anon_sym_DQUOTE;
	v->a[13844] = actions(296);
	v->a[13845] = 1;
	v->a[13846] = anon_sym_DOLLAR_LBRACE;
	v->a[13847] = actions(299);
	v->a[13848] = 1;
	v->a[13849] = anon_sym_DOLLAR_LPAREN;
	v->a[13850] = actions(302);
	v->a[13851] = 1;
	v->a[13852] = anon_sym_BQUOTE;
	v->a[13853] = actions(305);
	v->a[13854] = 1;
	v->a[13855] = sym_file_descriptor;
	v->a[13856] = actions(308);
	v->a[13857] = 1;
	v->a[13858] = sym_variable_name;
	v->a[13859] = state(118);
	small_parse_table_693(v);
}

void	small_parse_table_693(t_small_parse_table_array *v)
{
	v->a[13860] = 1;
	v->a[13861] = aux_sym__statements_repeat1;
	v->a[13862] = state(183);
	v->a[13863] = 1;
	v->a[13864] = sym_command_name;
	v->a[13865] = state(342);
	v->a[13866] = 1;
	v->a[13867] = sym_variable_assignment;
	v->a[13868] = state(603);
	v->a[13869] = 1;
	v->a[13870] = sym_concatenation;
	v->a[13871] = state(639);
	v->a[13872] = 1;
	v->a[13873] = aux_sym_command_repeat1;
	v->a[13874] = state(644);
	v->a[13875] = 1;
	v->a[13876] = sym_file_redirect;
	v->a[13877] = state(1131);
	v->a[13878] = 1;
	v->a[13879] = sym_pipeline;
	small_parse_table_694(v);
}

void	small_parse_table_694(t_small_parse_table_array *v)
{
	v->a[13880] = state(1196);
	v->a[13881] = 1;
	v->a[13882] = aux_sym_redirected_statement_repeat2;
	v->a[13883] = state(1910);
	v->a[13884] = 1;
	v->a[13885] = sym__statement_not_pipeline;
	v->a[13886] = actions(263);
	v->a[13887] = 2;
	v->a[13888] = anon_sym_while;
	v->a[13889] = anon_sym_until;
	v->a[13890] = actions(293);
	v->a[13891] = 2;
	v->a[13892] = sym_raw_string;
	v->a[13893] = sym_number;
	v->a[13894] = state(436);
	v->a[13895] = 5;
	v->a[13896] = sym_arithmetic_expansion;
	v->a[13897] = sym_string;
	v->a[13898] = sym_simple_expansion;
	v->a[13899] = sym_expansion;
	small_parse_table_695(v);
}

/* EOF small_parse_table_138.c */
