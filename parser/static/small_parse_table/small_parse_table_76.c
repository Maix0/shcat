/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_76.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_380(t_small_parse_table_array *v)
{
	v->a[7600] = sym_variable_name;
	v->a[7601] = actions(240);
	v->a[7602] = 1;
	v->a[7603] = sym_word;
	v->a[7604] = actions(242);
	v->a[7605] = 1;
	v->a[7606] = anon_sym_BANG;
	v->a[7607] = state(136);
	v->a[7608] = 1;
	v->a[7609] = aux_sym__statements_repeat1;
	v->a[7610] = state(188);
	v->a[7611] = 1;
	v->a[7612] = sym_command_name;
	v->a[7613] = state(297);
	v->a[7614] = 1;
	v->a[7615] = sym_variable_assignment;
	v->a[7616] = state(650);
	v->a[7617] = 1;
	v->a[7618] = sym_concatenation;
	v->a[7619] = state(749);
	small_parse_table_381(v);
}

void	small_parse_table_381(t_small_parse_table_array *v)
{
	v->a[7620] = 1;
	v->a[7621] = aux_sym_command_repeat1;
	v->a[7622] = state(795);
	v->a[7623] = 1;
	v->a[7624] = sym_file_redirect;
	v->a[7625] = state(1154);
	v->a[7626] = 1;
	v->a[7627] = sym_pipeline;
	v->a[7628] = state(1240);
	v->a[7629] = 1;
	v->a[7630] = aux_sym_redirected_statement_repeat2;
	v->a[7631] = state(2119);
	v->a[7632] = 1;
	v->a[7633] = sym__statement_not_pipeline;
	v->a[7634] = state(2160);
	v->a[7635] = 1;
	v->a[7636] = sym__statements;
	v->a[7637] = actions(11);
	v->a[7638] = 2;
	v->a[7639] = anon_sym_while;
	small_parse_table_382(v);
}

void	small_parse_table_382(t_small_parse_table_array *v)
{
	v->a[7640] = anon_sym_until;
	v->a[7641] = actions(57);
	v->a[7642] = 2;
	v->a[7643] = anon_sym_LT_AMP_DASH;
	v->a[7644] = anon_sym_GT_AMP_DASH;
	v->a[7645] = actions(65);
	v->a[7646] = 2;
	v->a[7647] = sym_raw_string;
	v->a[7648] = sym_number;
	v->a[7649] = state(443);
	v->a[7650] = 5;
	v->a[7651] = sym_arithmetic_expansion;
	v->a[7652] = sym_string;
	v->a[7653] = sym_simple_expansion;
	v->a[7654] = sym_expansion;
	v->a[7655] = sym_command_substitution;
	v->a[7656] = actions(55);
	v->a[7657] = 6;
	v->a[7658] = anon_sym_LT;
	v->a[7659] = anon_sym_GT;
	small_parse_table_383(v);
}

void	small_parse_table_383(t_small_parse_table_array *v)
{
	v->a[7660] = anon_sym_GT_GT;
	v->a[7661] = anon_sym_LT_AMP;
	v->a[7662] = anon_sym_GT_AMP;
	v->a[7663] = anon_sym_GT_PIPE;
	v->a[7664] = state(1030);
	v->a[7665] = 12;
	v->a[7666] = sym_redirected_statement;
	v->a[7667] = sym_for_statement;
	v->a[7668] = sym_while_statement;
	v->a[7669] = sym_if_statement;
	v->a[7670] = sym_case_statement;
	v->a[7671] = sym_function_definition;
	v->a[7672] = sym_compound_statement;
	v->a[7673] = sym_subshell;
	v->a[7674] = sym_list;
	v->a[7675] = sym_negated_command;
	v->a[7676] = sym_command;
	v->a[7677] = sym__variable_assignments;
	v->a[7678] = 32;
	v->a[7679] = actions(3);
	small_parse_table_384(v);
}

void	small_parse_table_384(t_small_parse_table_array *v)
{
	v->a[7680] = 1;
	v->a[7681] = sym_comment;
	v->a[7682] = actions(9);
	v->a[7683] = 1;
	v->a[7684] = anon_sym_for;
	v->a[7685] = actions(13);
	v->a[7686] = 1;
	v->a[7687] = anon_sym_if;
	v->a[7688] = actions(15);
	v->a[7689] = 1;
	v->a[7690] = anon_sym_case;
	v->a[7691] = actions(17);
	v->a[7692] = 1;
	v->a[7693] = anon_sym_LPAREN;
	v->a[7694] = actions(19);
	v->a[7695] = 1;
	v->a[7696] = anon_sym_LBRACE;
	v->a[7697] = actions(59);
	v->a[7698] = 1;
	v->a[7699] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_385(v);
}

/* EOF small_parse_table_76.c */
