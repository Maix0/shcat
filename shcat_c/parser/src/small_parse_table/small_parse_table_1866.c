/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1866.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9330(t_small_parse_table_array *v)
{
	v->a[186600] = state(6426);
	v->a[186601] = 1;
	v->a[186602] = aux_sym__literal_repeat1;
	v->a[186603] = state(7603);
	v->a[186604] = 1;
	v->a[186605] = sym_last_case_item;
	v->a[186606] = actions(7224);
	v->a[186607] = 2;
	v->a[186608] = anon_sym_LPAREN_LPAREN;
	v->a[186609] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[186610] = actions(7232);
	v->a[186611] = 2;
	v->a[186612] = sym_raw_string;
	v->a[186613] = sym_ansi_c_string;
	v->a[186614] = actions(7240);
	v->a[186615] = 2;
	v->a[186616] = anon_sym_LT_LPAREN;
	v->a[186617] = anon_sym_GT_LPAREN;
	v->a[186618] = state(3477);
	v->a[186619] = 2;
	small_parse_table_9331(v);
}

void	small_parse_table_9331(t_small_parse_table_array *v)
{
	v->a[186620] = sym_case_item;
	v->a[186621] = aux_sym_case_statement_repeat1;
	v->a[186622] = state(6695);
	v->a[186623] = 2;
	v->a[186624] = sym_concatenation;
	v->a[186625] = sym__extglob_blob;
	v->a[186626] = state(6303);
	v->a[186627] = 9;
	v->a[186628] = sym_arithmetic_expansion;
	v->a[186629] = sym_brace_expression;
	v->a[186630] = sym_string;
	v->a[186631] = sym_translated_string;
	v->a[186632] = sym_number;
	v->a[186633] = sym_simple_expansion;
	v->a[186634] = sym_expansion;
	v->a[186635] = sym_command_substitution;
	v->a[186636] = sym_process_substitution;
	v->a[186637] = 3;
	v->a[186638] = actions(71);
	v->a[186639] = 1;
	small_parse_table_9332(v);
}

void	small_parse_table_9332(t_small_parse_table_array *v)
{
	v->a[186640] = sym_comment;
	v->a[186641] = actions(1352);
	v->a[186642] = 14;
	v->a[186643] = anon_sym_EQ;
	v->a[186644] = anon_sym_PIPE;
	v->a[186645] = anon_sym_CARET;
	v->a[186646] = anon_sym_AMP;
	v->a[186647] = anon_sym_LT;
	v->a[186648] = anon_sym_GT;
	v->a[186649] = anon_sym_LT_LT;
	v->a[186650] = anon_sym_GT_GT;
	v->a[186651] = anon_sym_PLUS;
	v->a[186652] = anon_sym_DASH;
	v->a[186653] = anon_sym_STAR;
	v->a[186654] = anon_sym_SLASH;
	v->a[186655] = anon_sym_PERCENT;
	v->a[186656] = anon_sym_STAR_STAR;
	v->a[186657] = actions(1354);
	v->a[186658] = 22;
	v->a[186659] = anon_sym_PLUS_PLUS;
	small_parse_table_9333(v);
}

void	small_parse_table_9333(t_small_parse_table_array *v)
{
	v->a[186660] = anon_sym_DASH_DASH;
	v->a[186661] = anon_sym_PLUS_EQ;
	v->a[186662] = anon_sym_DASH_EQ;
	v->a[186663] = anon_sym_STAR_EQ;
	v->a[186664] = anon_sym_SLASH_EQ;
	v->a[186665] = anon_sym_PERCENT_EQ;
	v->a[186666] = anon_sym_STAR_STAR_EQ;
	v->a[186667] = anon_sym_LT_LT_EQ;
	v->a[186668] = anon_sym_GT_GT_EQ;
	v->a[186669] = anon_sym_AMP_EQ;
	v->a[186670] = anon_sym_CARET_EQ;
	v->a[186671] = anon_sym_PIPE_EQ;
	v->a[186672] = anon_sym_PIPE_PIPE;
	v->a[186673] = anon_sym_AMP_AMP;
	v->a[186674] = anon_sym_EQ_EQ;
	v->a[186675] = anon_sym_BANG_EQ;
	v->a[186676] = anon_sym_LT_EQ;
	v->a[186677] = anon_sym_GT_EQ;
	v->a[186678] = anon_sym_RPAREN;
	v->a[186679] = anon_sym_EQ_TILDE;
	small_parse_table_9334(v);
}

void	small_parse_table_9334(t_small_parse_table_array *v)
{
	v->a[186680] = anon_sym_QMARK;
	v->a[186681] = 4;
	v->a[186682] = actions(71);
	v->a[186683] = 1;
	v->a[186684] = sym_comment;
	v->a[186685] = actions(7717);
	v->a[186686] = 2;
	v->a[186687] = anon_sym_PLUS_PLUS;
	v->a[186688] = anon_sym_DASH_DASH;
	v->a[186689] = actions(7469);
	v->a[186690] = 13;
	v->a[186691] = anon_sym_PIPE;
	v->a[186692] = anon_sym_CARET;
	v->a[186693] = anon_sym_AMP;
	v->a[186694] = anon_sym_LT;
	v->a[186695] = anon_sym_GT;
	v->a[186696] = anon_sym_LT_LT;
	v->a[186697] = anon_sym_GT_GT;
	v->a[186698] = anon_sym_PLUS;
	v->a[186699] = anon_sym_DASH;
	small_parse_table_9335(v);
}

/* EOF small_parse_table_1866.c */
