/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_127.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_635(t_small_parse_table_array *v)
{
	v->a[12700] = sym_command_substitution;
	v->a[12701] = 29;
	v->a[12702] = actions(3);
	v->a[12703] = 1;
	v->a[12704] = sym_comment;
	v->a[12705] = actions(9);
	v->a[12706] = 1;
	v->a[12707] = anon_sym_for;
	v->a[12708] = actions(13);
	v->a[12709] = 1;
	v->a[12710] = anon_sym_if;
	v->a[12711] = actions(15);
	v->a[12712] = 1;
	v->a[12713] = anon_sym_case;
	v->a[12714] = actions(17);
	v->a[12715] = 1;
	v->a[12716] = anon_sym_LPAREN;
	v->a[12717] = actions(19);
	v->a[12718] = 1;
	v->a[12719] = anon_sym_LBRACE;
	small_parse_table_636(v);
}

void	small_parse_table_636(t_small_parse_table_array *v)
{
	v->a[12720] = actions(41);
	v->a[12721] = 1;
	v->a[12722] = sym_word;
	v->a[12723] = actions(49);
	v->a[12724] = 1;
	v->a[12725] = anon_sym_BANG;
	v->a[12726] = actions(53);
	v->a[12727] = 1;
	v->a[12728] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[12729] = actions(55);
	v->a[12730] = 1;
	v->a[12731] = anon_sym_DOLLAR;
	v->a[12732] = actions(57);
	v->a[12733] = 1;
	v->a[12734] = anon_sym_DQUOTE;
	v->a[12735] = actions(61);
	v->a[12736] = 1;
	v->a[12737] = anon_sym_DOLLAR_LBRACE;
	v->a[12738] = actions(63);
	v->a[12739] = 1;
	small_parse_table_637(v);
}

void	small_parse_table_637(t_small_parse_table_array *v)
{
	v->a[12740] = anon_sym_DOLLAR_LPAREN;
	v->a[12741] = actions(65);
	v->a[12742] = 1;
	v->a[12743] = anon_sym_BQUOTE;
	v->a[12744] = actions(67);
	v->a[12745] = 1;
	v->a[12746] = sym_variable_name;
	v->a[12747] = state(64);
	v->a[12748] = 1;
	v->a[12749] = aux_sym__terminated_statement;
	v->a[12750] = state(185);
	v->a[12751] = 1;
	v->a[12752] = sym_command_name;
	v->a[12753] = state(209);
	v->a[12754] = 1;
	v->a[12755] = sym_variable_assignment;
	v->a[12756] = state(411);
	v->a[12757] = 1;
	v->a[12758] = aux_sym_command_repeat1;
	v->a[12759] = state(551);
	small_parse_table_638(v);
}

void	small_parse_table_638(t_small_parse_table_array *v)
{
	v->a[12760] = 1;
	v->a[12761] = sym_file_redirect;
	v->a[12762] = state(555);
	v->a[12763] = 1;
	v->a[12764] = sym_concatenation;
	v->a[12765] = state(974);
	v->a[12766] = 1;
	v->a[12767] = sym_pipeline;
	v->a[12768] = state(1126);
	v->a[12769] = 1;
	v->a[12770] = aux_sym_redirected_statement_repeat2;
	v->a[12771] = state(1561);
	v->a[12772] = 1;
	v->a[12773] = sym__statement_not_pipeline;
	v->a[12774] = actions(11);
	v->a[12775] = 2;
	v->a[12776] = anon_sym_while;
	v->a[12777] = anon_sym_until;
	v->a[12778] = actions(59);
	v->a[12779] = 2;
	small_parse_table_639(v);
}

void	small_parse_table_639(t_small_parse_table_array *v)
{
	v->a[12780] = sym_raw_string;
	v->a[12781] = sym_number;
	v->a[12782] = actions(51);
	v->a[12783] = 3;
	v->a[12784] = anon_sym_LT;
	v->a[12785] = anon_sym_GT;
	v->a[12786] = anon_sym_GT_GT;
	v->a[12787] = state(401);
	v->a[12788] = 5;
	v->a[12789] = sym_arithmetic_expansion;
	v->a[12790] = sym_string;
	v->a[12791] = sym_simple_expansion;
	v->a[12792] = sym_expansion;
	v->a[12793] = sym_command_substitution;
	v->a[12794] = state(955);
	v->a[12795] = 12;
	v->a[12796] = sym_redirected_statement;
	v->a[12797] = sym_for_statement;
	v->a[12798] = sym_while_statement;
	v->a[12799] = sym_if_statement;
	small_parse_table_640(v);
}

/* EOF small_parse_table_127.c */
