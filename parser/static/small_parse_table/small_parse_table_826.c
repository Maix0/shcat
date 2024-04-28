/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_826.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4130(t_small_parse_table_array *v)
{
	v->a[82600] = anon_sym_PIPE;
	v->a[82601] = anon_sym_AMP;
	v->a[82602] = anon_sym_LT;
	v->a[82603] = anon_sym_GT;
	v->a[82604] = anon_sym_LT_LT;
	v->a[82605] = anon_sym_GT_GT;
	v->a[82606] = anon_sym_RPAREN;
	v->a[82607] = anon_sym_SEMI_SEMI;
	v->a[82608] = anon_sym_PIPE_AMP;
	v->a[82609] = anon_sym_AMP_GT;
	v->a[82610] = anon_sym_AMP_GT_GT;
	v->a[82611] = anon_sym_LT_AMP;
	v->a[82612] = anon_sym_GT_AMP;
	v->a[82613] = anon_sym_GT_PIPE;
	v->a[82614] = anon_sym_LT_AMP_DASH;
	v->a[82615] = anon_sym_GT_AMP_DASH;
	v->a[82616] = anon_sym_LT_LT_DASH;
	v->a[82617] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[82618] = anon_sym_DOLLAR_LBRACK;
	v->a[82619] = aux_sym_concatenation_token1;
	small_parse_table_4131(v);
}

void	small_parse_table_4131(t_small_parse_table_array *v)
{
	v->a[82620] = anon_sym_DOLLAR;
	v->a[82621] = sym__special_character;
	v->a[82622] = anon_sym_DQUOTE;
	v->a[82623] = sym_raw_string;
	v->a[82624] = sym_ansi_c_string;
	v->a[82625] = aux_sym_number_token1;
	v->a[82626] = aux_sym_number_token2;
	v->a[82627] = anon_sym_DOLLAR_LBRACE;
	v->a[82628] = anon_sym_DOLLAR_LPAREN;
	v->a[82629] = anon_sym_BQUOTE;
	v->a[82630] = anon_sym_DOLLAR_BQUOTE;
	v->a[82631] = anon_sym_LT_LPAREN;
	v->a[82632] = anon_sym_GT_LPAREN;
	v->a[82633] = aux_sym__simple_variable_name_token1;
	v->a[82634] = sym_word;
	v->a[82635] = 3;
	v->a[82636] = actions(3);
	v->a[82637] = 1;
	v->a[82638] = sym_comment;
	v->a[82639] = actions(5375);
	small_parse_table_4132(v);
}

void	small_parse_table_4132(t_small_parse_table_array *v)
{
	v->a[82640] = 5;
	v->a[82641] = sym_file_descriptor;
	v->a[82642] = sym_variable_name;
	v->a[82643] = sym_test_operator;
	v->a[82644] = sym__brace_start;
	v->a[82645] = aux_sym_heredoc_redirect_token1;
	v->a[82646] = actions(5373);
	v->a[82647] = 39;
	v->a[82648] = anon_sym_LPAREN_LPAREN;
	v->a[82649] = anon_sym_SEMI;
	v->a[82650] = anon_sym_PIPE_PIPE;
	v->a[82651] = anon_sym_AMP_AMP;
	v->a[82652] = anon_sym_PIPE;
	v->a[82653] = anon_sym_AMP;
	v->a[82654] = anon_sym_LT;
	v->a[82655] = anon_sym_GT;
	v->a[82656] = anon_sym_LT_LT;
	v->a[82657] = anon_sym_GT_GT;
	v->a[82658] = anon_sym_SEMI_SEMI;
	v->a[82659] = anon_sym_SEMI_AMP;
	small_parse_table_4133(v);
}

void	small_parse_table_4133(t_small_parse_table_array *v)
{
	v->a[82660] = anon_sym_SEMI_SEMI_AMP;
	v->a[82661] = anon_sym_PIPE_AMP;
	v->a[82662] = anon_sym_AMP_GT;
	v->a[82663] = anon_sym_AMP_GT_GT;
	v->a[82664] = anon_sym_LT_AMP;
	v->a[82665] = anon_sym_GT_AMP;
	v->a[82666] = anon_sym_GT_PIPE;
	v->a[82667] = anon_sym_LT_AMP_DASH;
	v->a[82668] = anon_sym_GT_AMP_DASH;
	v->a[82669] = anon_sym_LT_LT_DASH;
	v->a[82670] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[82671] = anon_sym_DOLLAR_LBRACK;
	v->a[82672] = anon_sym_DOLLAR;
	v->a[82673] = sym__special_character;
	v->a[82674] = anon_sym_DQUOTE;
	v->a[82675] = sym_raw_string;
	v->a[82676] = sym_ansi_c_string;
	v->a[82677] = aux_sym_number_token1;
	v->a[82678] = aux_sym_number_token2;
	v->a[82679] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_4134(v);
}

void	small_parse_table_4134(t_small_parse_table_array *v)
{
	v->a[82680] = anon_sym_DOLLAR_LPAREN;
	v->a[82681] = anon_sym_BQUOTE;
	v->a[82682] = anon_sym_DOLLAR_BQUOTE;
	v->a[82683] = anon_sym_LT_LPAREN;
	v->a[82684] = anon_sym_GT_LPAREN;
	v->a[82685] = aux_sym__simple_variable_name_token1;
	v->a[82686] = sym_word;
	v->a[82687] = 5;
	v->a[82688] = actions(3);
	v->a[82689] = 1;
	v->a[82690] = sym_comment;
	v->a[82691] = actions(5965);
	v->a[82692] = 1;
	v->a[82693] = sym__special_character;
	v->a[82694] = state(1736);
	v->a[82695] = 1;
	v->a[82696] = aux_sym__literal_repeat1;
	v->a[82697] = actions(1364);
	v->a[82698] = 5;
	v->a[82699] = sym_file_descriptor;
	small_parse_table_4135(v);
}

/* EOF small_parse_table_826.c */
