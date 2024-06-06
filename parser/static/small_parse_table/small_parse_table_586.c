/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_586.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2930(t_small_parse_table_array *v)
{
	v->a[58600] = actions(3632);
	v->a[58601] = 1;
	v->a[58602] = aux_sym_heredoc_redirect_token1;
	v->a[58603] = actions(3634);
	v->a[58604] = 1;
	v->a[58605] = sym_file_descriptor;
	v->a[58606] = actions(3876);
	v->a[58607] = 1;
	v->a[58608] = anon_sym_RPAREN;
	v->a[58609] = actions(3637);
	v->a[58610] = 3;
	v->a[58611] = sym_variable_name;
	v->a[58612] = sym_test_operator;
	v->a[58613] = sym__brace_start;
	v->a[58614] = actions(3627);
	v->a[58615] = 9;
	v->a[58616] = anon_sym_PIPE;
	v->a[58617] = anon_sym_SEMI_SEMI;
	v->a[58618] = anon_sym_PIPE_AMP;
	v->a[58619] = anon_sym_AMP_AMP;
	small_parse_table_2931(v);
}

void	small_parse_table_2931(t_small_parse_table_array *v)
{
	v->a[58620] = anon_sym_PIPE_PIPE;
	v->a[58621] = anon_sym_LT_LT;
	v->a[58622] = anon_sym_LT_LT_DASH;
	v->a[58623] = anon_sym_AMP;
	v->a[58624] = anon_sym_SEMI;
	v->a[58625] = actions(3629);
	v->a[58626] = 10;
	v->a[58627] = anon_sym_LT;
	v->a[58628] = anon_sym_GT;
	v->a[58629] = anon_sym_GT_GT;
	v->a[58630] = anon_sym_AMP_GT;
	v->a[58631] = anon_sym_AMP_GT_GT;
	v->a[58632] = anon_sym_LT_AMP;
	v->a[58633] = anon_sym_GT_AMP;
	v->a[58634] = anon_sym_GT_PIPE;
	v->a[58635] = anon_sym_LT_AMP_DASH;
	v->a[58636] = anon_sym_GT_AMP_DASH;
	v->a[58637] = actions(3625);
	v->a[58638] = 12;
	v->a[58639] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_2932(v);
}

void	small_parse_table_2932(t_small_parse_table_array *v)
{
	v->a[58640] = anon_sym_DOLLAR;
	v->a[58641] = sym__special_character;
	v->a[58642] = anon_sym_DQUOTE;
	v->a[58643] = sym_raw_string;
	v->a[58644] = aux_sym_number_token1;
	v->a[58645] = aux_sym_number_token2;
	v->a[58646] = anon_sym_DOLLAR_LBRACE;
	v->a[58647] = anon_sym_DOLLAR_LPAREN;
	v->a[58648] = anon_sym_BQUOTE;
	v->a[58649] = anon_sym_DOLLAR_BQUOTE;
	v->a[58650] = sym_word;
	v->a[58651] = 19;
	v->a[58652] = actions(3);
	v->a[58653] = 1;
	v->a[58654] = sym_comment;
	v->a[58655] = actions(3881);
	v->a[58656] = 1;
	v->a[58657] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[58658] = actions(3883);
	v->a[58659] = 1;
	small_parse_table_2933(v);
}

void	small_parse_table_2933(t_small_parse_table_array *v)
{
	v->a[58660] = anon_sym_DOLLAR;
	v->a[58661] = actions(3885);
	v->a[58662] = 1;
	v->a[58663] = sym__special_character;
	v->a[58664] = actions(3887);
	v->a[58665] = 1;
	v->a[58666] = anon_sym_DQUOTE;
	v->a[58667] = actions(3889);
	v->a[58668] = 1;
	v->a[58669] = aux_sym_number_token1;
	v->a[58670] = actions(3891);
	v->a[58671] = 1;
	v->a[58672] = aux_sym_number_token2;
	v->a[58673] = actions(3893);
	v->a[58674] = 1;
	v->a[58675] = anon_sym_DOLLAR_LBRACE;
	v->a[58676] = actions(3895);
	v->a[58677] = 1;
	v->a[58678] = anon_sym_DOLLAR_LPAREN;
	v->a[58679] = actions(3897);
	small_parse_table_2934(v);
}

void	small_parse_table_2934(t_small_parse_table_array *v)
{
	v->a[58680] = 1;
	v->a[58681] = anon_sym_BQUOTE;
	v->a[58682] = actions(3899);
	v->a[58683] = 1;
	v->a[58684] = anon_sym_DOLLAR_BQUOTE;
	v->a[58685] = actions(3901);
	v->a[58686] = 1;
	v->a[58687] = sym_test_operator;
	v->a[58688] = actions(3903);
	v->a[58689] = 1;
	v->a[58690] = sym__brace_start;
	v->a[58691] = state(2833);
	v->a[58692] = 1;
	v->a[58693] = aux_sym__literal_repeat1;
	v->a[58694] = state(2981);
	v->a[58695] = 1;
	v->a[58696] = sym_concatenation;
	v->a[58697] = actions(1530);
	v->a[58698] = 2;
	v->a[58699] = sym_file_descriptor;
	small_parse_table_2935(v);
}

/* EOF small_parse_table_586.c */
