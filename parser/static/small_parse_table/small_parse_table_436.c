/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_436.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2180(t_small_parse_table_array *v)
{
	v->a[43600] = anon_sym_LT;
	v->a[43601] = anon_sym_GT;
	v->a[43602] = anon_sym_GT_GT;
	v->a[43603] = anon_sym_AMP_GT;
	v->a[43604] = anon_sym_AMP_GT_GT;
	v->a[43605] = anon_sym_LT_AMP;
	v->a[43606] = anon_sym_GT_AMP;
	v->a[43607] = anon_sym_GT_PIPE;
	v->a[43608] = anon_sym_LT_AMP_DASH;
	v->a[43609] = anon_sym_GT_AMP_DASH;
	v->a[43610] = anon_sym_LT_LT;
	v->a[43611] = anon_sym_LT_LT_DASH;
	v->a[43612] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[43613] = anon_sym_AMP;
	v->a[43614] = anon_sym_DOLLAR;
	v->a[43615] = anon_sym_DQUOTE;
	v->a[43616] = sym_raw_string;
	v->a[43617] = aux_sym_number_token1;
	v->a[43618] = aux_sym_number_token2;
	v->a[43619] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_2181(v);
}

void	small_parse_table_2181(t_small_parse_table_array *v)
{
	v->a[43620] = anon_sym_DOLLAR_LPAREN;
	v->a[43621] = anon_sym_BQUOTE;
	v->a[43622] = anon_sym_DOLLAR_BQUOTE;
	v->a[43623] = sym_word;
	v->a[43624] = anon_sym_SEMI;
	v->a[43625] = 3;
	v->a[43626] = actions(3);
	v->a[43627] = 1;
	v->a[43628] = sym_comment;
	v->a[43629] = actions(2774);
	v->a[43630] = 5;
	v->a[43631] = sym_file_descriptor;
	v->a[43632] = sym__concat;
	v->a[43633] = sym_test_operator;
	v->a[43634] = sym__brace_start;
	v->a[43635] = aux_sym_heredoc_redirect_token1;
	v->a[43636] = actions(2772);
	v->a[43637] = 35;
	v->a[43638] = anon_sym_PIPE;
	v->a[43639] = anon_sym_SEMI_SEMI;
	small_parse_table_2182(v);
}

void	small_parse_table_2182(t_small_parse_table_array *v)
{
	v->a[43640] = anon_sym_SEMI_AMP;
	v->a[43641] = anon_sym_SEMI_SEMI_AMP;
	v->a[43642] = anon_sym_PIPE_AMP;
	v->a[43643] = anon_sym_AMP_AMP;
	v->a[43644] = anon_sym_PIPE_PIPE;
	v->a[43645] = anon_sym_LT;
	v->a[43646] = anon_sym_GT;
	v->a[43647] = anon_sym_GT_GT;
	v->a[43648] = anon_sym_AMP_GT;
	v->a[43649] = anon_sym_AMP_GT_GT;
	v->a[43650] = anon_sym_LT_AMP;
	v->a[43651] = anon_sym_GT_AMP;
	v->a[43652] = anon_sym_GT_PIPE;
	v->a[43653] = anon_sym_LT_AMP_DASH;
	v->a[43654] = anon_sym_GT_AMP_DASH;
	v->a[43655] = anon_sym_LT_LT;
	v->a[43656] = anon_sym_LT_LT_DASH;
	v->a[43657] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[43658] = anon_sym_AMP;
	v->a[43659] = aux_sym_concatenation_token1;
	small_parse_table_2183(v);
}

void	small_parse_table_2183(t_small_parse_table_array *v)
{
	v->a[43660] = anon_sym_DOLLAR;
	v->a[43661] = sym__special_character;
	v->a[43662] = anon_sym_DQUOTE;
	v->a[43663] = sym_raw_string;
	v->a[43664] = aux_sym_number_token1;
	v->a[43665] = aux_sym_number_token2;
	v->a[43666] = anon_sym_DOLLAR_LBRACE;
	v->a[43667] = anon_sym_DOLLAR_LPAREN;
	v->a[43668] = anon_sym_BQUOTE;
	v->a[43669] = anon_sym_DOLLAR_BQUOTE;
	v->a[43670] = aux_sym__simple_variable_name_token1;
	v->a[43671] = sym_word;
	v->a[43672] = anon_sym_SEMI;
	v->a[43673] = 6;
	v->a[43674] = actions(3);
	v->a[43675] = 1;
	v->a[43676] = sym_comment;
	v->a[43677] = actions(3607);
	v->a[43678] = 1;
	v->a[43679] = aux_sym_concatenation_token1;
	small_parse_table_2184(v);
}

void	small_parse_table_2184(t_small_parse_table_array *v)
{
	v->a[43680] = actions(3609);
	v->a[43681] = 1;
	v->a[43682] = sym__concat;
	v->a[43683] = state(1085);
	v->a[43684] = 1;
	v->a[43685] = aux_sym_concatenation_repeat1;
	v->a[43686] = actions(2664);
	v->a[43687] = 5;
	v->a[43688] = sym_file_descriptor;
	v->a[43689] = sym_test_operator;
	v->a[43690] = sym__brace_start;
	v->a[43691] = ts_builtin_sym_end;
	v->a[43692] = aux_sym_heredoc_redirect_token1;
	v->a[43693] = actions(2662);
	v->a[43694] = 31;
	v->a[43695] = anon_sym_PIPE;
	v->a[43696] = anon_sym_SEMI_SEMI;
	v->a[43697] = anon_sym_PIPE_AMP;
	v->a[43698] = anon_sym_AMP_AMP;
	v->a[43699] = anon_sym_PIPE_PIPE;
	small_parse_table_2185(v);
}

/* EOF small_parse_table_436.c */
