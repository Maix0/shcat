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
	v->a[7600] = sym_case_statement;
	v->a[7601] = sym_function_definition;
	v->a[7602] = sym_compound_statement;
	v->a[7603] = sym_subshell;
	v->a[7604] = sym_list;
	v->a[7605] = sym_negated_command;
	v->a[7606] = sym_command;
	v->a[7607] = sym__variable_assignments;
	v->a[7608] = 30;
	v->a[7609] = actions(3);
	v->a[7610] = 1;
	v->a[7611] = sym_comment;
	v->a[7612] = actions(9);
	v->a[7613] = 1;
	v->a[7614] = anon_sym_for;
	v->a[7615] = actions(13);
	v->a[7616] = 1;
	v->a[7617] = anon_sym_if;
	v->a[7618] = actions(15);
	v->a[7619] = 1;
	small_parse_table_381(v);
}

void	small_parse_table_381(t_small_parse_table_array *v)
{
	v->a[7620] = anon_sym_case;
	v->a[7621] = actions(17);
	v->a[7622] = 1;
	v->a[7623] = anon_sym_LPAREN;
	v->a[7624] = actions(19);
	v->a[7625] = 1;
	v->a[7626] = anon_sym_LBRACE;
	v->a[7627] = actions(53);
	v->a[7628] = 1;
	v->a[7629] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[7630] = actions(55);
	v->a[7631] = 1;
	v->a[7632] = anon_sym_DOLLAR;
	v->a[7633] = actions(57);
	v->a[7634] = 1;
	v->a[7635] = anon_sym_DQUOTE;
	v->a[7636] = actions(61);
	v->a[7637] = 1;
	v->a[7638] = anon_sym_DOLLAR_LBRACE;
	v->a[7639] = actions(63);
	small_parse_table_382(v);
}

void	small_parse_table_382(t_small_parse_table_array *v)
{
	v->a[7640] = 1;
	v->a[7641] = anon_sym_DOLLAR_LPAREN;
	v->a[7642] = actions(65);
	v->a[7643] = 1;
	v->a[7644] = anon_sym_BQUOTE;
	v->a[7645] = actions(67);
	v->a[7646] = 1;
	v->a[7647] = sym_variable_name;
	v->a[7648] = actions(204);
	v->a[7649] = 1;
	v->a[7650] = sym_word;
	v->a[7651] = actions(206);
	v->a[7652] = 1;
	v->a[7653] = anon_sym_BANG;
	v->a[7654] = state(116);
	v->a[7655] = 1;
	v->a[7656] = aux_sym__statements_repeat1;
	v->a[7657] = state(179);
	v->a[7658] = 1;
	v->a[7659] = sym_command_name;
	small_parse_table_383(v);
}

void	small_parse_table_383(t_small_parse_table_array *v)
{
	v->a[7660] = state(208);
	v->a[7661] = 1;
	v->a[7662] = sym_variable_assignment;
	v->a[7663] = state(385);
	v->a[7664] = 1;
	v->a[7665] = aux_sym_command_repeat1;
	v->a[7666] = state(555);
	v->a[7667] = 1;
	v->a[7668] = sym_concatenation;
	v->a[7669] = state(599);
	v->a[7670] = 1;
	v->a[7671] = sym_file_redirect;
	v->a[7672] = state(969);
	v->a[7673] = 1;
	v->a[7674] = sym_pipeline;
	v->a[7675] = state(1006);
	v->a[7676] = 1;
	v->a[7677] = aux_sym_redirected_statement_repeat2;
	v->a[7678] = state(1560);
	v->a[7679] = 1;
	small_parse_table_384(v);
}

void	small_parse_table_384(t_small_parse_table_array *v)
{
	v->a[7680] = sym__statement_not_pipeline;
	v->a[7681] = state(1723);
	v->a[7682] = 1;
	v->a[7683] = sym__statements;
	v->a[7684] = actions(11);
	v->a[7685] = 2;
	v->a[7686] = anon_sym_while;
	v->a[7687] = anon_sym_until;
	v->a[7688] = actions(59);
	v->a[7689] = 2;
	v->a[7690] = sym_raw_string;
	v->a[7691] = sym_number;
	v->a[7692] = actions(51);
	v->a[7693] = 3;
	v->a[7694] = anon_sym_LT;
	v->a[7695] = anon_sym_GT;
	v->a[7696] = anon_sym_GT_GT;
	v->a[7697] = state(401);
	v->a[7698] = 5;
	v->a[7699] = sym_arithmetic_expansion;
	small_parse_table_385(v);
}

/* EOF small_parse_table_76.c */
