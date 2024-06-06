/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_986.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4930(t_small_parse_table_array *v)
{
	v->a[98600] = sym__empty_value;
	v->a[98601] = actions(5433);
	v->a[98602] = 1;
	v->a[98603] = sym__brace_start;
	v->a[98604] = state(1916);
	v->a[98605] = 1;
	v->a[98606] = aux_sym__literal_repeat1;
	v->a[98607] = state(2141);
	v->a[98608] = 1;
	v->a[98609] = sym_concatenation;
	v->a[98610] = actions(5415);
	v->a[98611] = 2;
	v->a[98612] = sym_test_operator;
	v->a[98613] = sym_raw_string;
	v->a[98614] = state(2012);
	v->a[98615] = 7;
	v->a[98616] = sym_arithmetic_expansion;
	v->a[98617] = sym_brace_expression;
	v->a[98618] = sym_string;
	v->a[98619] = sym_number;
	small_parse_table_4931(v);
}

void	small_parse_table_4931(t_small_parse_table_array *v)
{
	v->a[98620] = sym_simple_expansion;
	v->a[98621] = sym_expansion;
	v->a[98622] = sym_command_substitution;
	v->a[98623] = 5;
	v->a[98624] = actions(3);
	v->a[98625] = 1;
	v->a[98626] = sym_comment;
	v->a[98627] = state(2048);
	v->a[98628] = 1;
	v->a[98629] = aux_sym_pipeline_repeat1;
	v->a[98630] = actions(5437);
	v->a[98631] = 2;
	v->a[98632] = anon_sym_PIPE;
	v->a[98633] = anon_sym_PIPE_AMP;
	v->a[98634] = actions(5439);
	v->a[98635] = 2;
	v->a[98636] = sym_file_descriptor;
	v->a[98637] = aux_sym_heredoc_redirect_token1;
	v->a[98638] = actions(5435);
	v->a[98639] = 20;
	small_parse_table_4932(v);
}

void	small_parse_table_4932(t_small_parse_table_array *v)
{
	v->a[98640] = anon_sym_esac;
	v->a[98641] = anon_sym_SEMI_SEMI;
	v->a[98642] = anon_sym_SEMI_AMP;
	v->a[98643] = anon_sym_SEMI_SEMI_AMP;
	v->a[98644] = anon_sym_AMP_AMP;
	v->a[98645] = anon_sym_PIPE_PIPE;
	v->a[98646] = anon_sym_LT;
	v->a[98647] = anon_sym_GT;
	v->a[98648] = anon_sym_GT_GT;
	v->a[98649] = anon_sym_AMP_GT;
	v->a[98650] = anon_sym_AMP_GT_GT;
	v->a[98651] = anon_sym_LT_AMP;
	v->a[98652] = anon_sym_GT_AMP;
	v->a[98653] = anon_sym_GT_PIPE;
	v->a[98654] = anon_sym_LT_AMP_DASH;
	v->a[98655] = anon_sym_GT_AMP_DASH;
	v->a[98656] = anon_sym_LT_LT;
	v->a[98657] = anon_sym_LT_LT_DASH;
	v->a[98658] = anon_sym_AMP;
	v->a[98659] = anon_sym_SEMI;
	small_parse_table_4933(v);
}

void	small_parse_table_4933(t_small_parse_table_array *v)
{
	v->a[98660] = 10;
	v->a[98661] = actions(3);
	v->a[98662] = 1;
	v->a[98663] = sym_comment;
	v->a[98664] = actions(2522);
	v->a[98665] = 1;
	v->a[98666] = aux_sym_heredoc_redirect_token1;
	v->a[98667] = actions(5159);
	v->a[98668] = 1;
	v->a[98669] = sym_file_descriptor;
	v->a[98670] = actions(2518);
	v->a[98671] = 2;
	v->a[98672] = anon_sym_AMP_AMP;
	v->a[98673] = anon_sym_PIPE_PIPE;
	v->a[98674] = actions(2520);
	v->a[98675] = 2;
	v->a[98676] = anon_sym_LT_LT;
	v->a[98677] = anon_sym_LT_LT_DASH;
	v->a[98678] = actions(2524);
	v->a[98679] = 2;
	small_parse_table_4934(v);
}

void	small_parse_table_4934(t_small_parse_table_array *v)
{
	v->a[98680] = anon_sym_AMP;
	v->a[98681] = anon_sym_SEMI;
	v->a[98682] = actions(5155);
	v->a[98683] = 2;
	v->a[98684] = anon_sym_LT_AMP_DASH;
	v->a[98685] = anon_sym_GT_AMP_DASH;
	v->a[98686] = state(1894);
	v->a[98687] = 3;
	v->a[98688] = sym_file_redirect;
	v->a[98689] = sym_heredoc_redirect;
	v->a[98690] = aux_sym_redirected_statement_repeat1;
	v->a[98691] = actions(2514);
	v->a[98692] = 4;
	v->a[98693] = anon_sym_esac;
	v->a[98694] = anon_sym_SEMI_SEMI;
	v->a[98695] = anon_sym_SEMI_AMP;
	v->a[98696] = anon_sym_SEMI_SEMI_AMP;
	v->a[98697] = actions(5153);
	v->a[98698] = 8;
	v->a[98699] = anon_sym_LT;
	small_parse_table_4935(v);
}

/* EOF small_parse_table_986.c */
