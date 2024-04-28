/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1629.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_8145(t_small_parse_table_array *v)
{
	v->a[162900] = aux_sym__literal_repeat1;
	v->a[162901] = state(7013);
	v->a[162902] = 1;
	v->a[162903] = sym_last_case_item;
	v->a[162904] = actions(7224);
	v->a[162905] = 2;
	v->a[162906] = anon_sym_LPAREN_LPAREN;
	v->a[162907] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[162908] = actions(7232);
	v->a[162909] = 2;
	v->a[162910] = sym_raw_string;
	v->a[162911] = sym_ansi_c_string;
	v->a[162912] = actions(7240);
	v->a[162913] = 2;
	v->a[162914] = anon_sym_LT_LPAREN;
	v->a[162915] = anon_sym_GT_LPAREN;
	v->a[162916] = state(3388);
	v->a[162917] = 2;
	v->a[162918] = sym_case_item;
	v->a[162919] = aux_sym_case_statement_repeat1;
	small_parse_table_8146(v);
}

void	small_parse_table_8146(t_small_parse_table_array *v)
{
	v->a[162920] = state(6695);
	v->a[162921] = 2;
	v->a[162922] = sym_concatenation;
	v->a[162923] = sym__extglob_blob;
	v->a[162924] = state(6303);
	v->a[162925] = 9;
	v->a[162926] = sym_arithmetic_expansion;
	v->a[162927] = sym_brace_expression;
	v->a[162928] = sym_string;
	v->a[162929] = sym_translated_string;
	v->a[162930] = sym_number;
	v->a[162931] = sym_simple_expansion;
	v->a[162932] = sym_expansion;
	v->a[162933] = sym_command_substitution;
	v->a[162934] = sym_process_substitution;
	v->a[162935] = 18;
	v->a[162936] = actions(71);
	v->a[162937] = 1;
	v->a[162938] = sym_comment;
	v->a[162939] = actions(6807);
	small_parse_table_8147(v);
}

void	small_parse_table_8147(t_small_parse_table_array *v)
{
	v->a[162940] = 1;
	v->a[162941] = anon_sym_EQ;
	v->a[162942] = actions(7220);
	v->a[162943] = 1;
	v->a[162944] = anon_sym_STAR_STAR;
	v->a[162945] = actions(7222);
	v->a[162946] = 1;
	v->a[162947] = sym_test_operator;
	v->a[162948] = actions(7380);
	v->a[162949] = 1;
	v->a[162950] = anon_sym_PIPE_PIPE;
	v->a[162951] = actions(7382);
	v->a[162952] = 1;
	v->a[162953] = anon_sym_AMP_AMP;
	v->a[162954] = actions(7384);
	v->a[162955] = 1;
	v->a[162956] = anon_sym_PIPE;
	v->a[162957] = actions(7386);
	v->a[162958] = 1;
	v->a[162959] = anon_sym_CARET;
	small_parse_table_8148(v);
}

void	small_parse_table_8148(t_small_parse_table_array *v)
{
	v->a[162960] = actions(7388);
	v->a[162961] = 1;
	v->a[162962] = anon_sym_AMP;
	v->a[162963] = actions(7392);
	v->a[162964] = 1;
	v->a[162965] = anon_sym_QMARK;
	v->a[162966] = actions(6793);
	v->a[162967] = 2;
	v->a[162968] = anon_sym_PLUS_PLUS;
	v->a[162969] = anon_sym_DASH_DASH;
	v->a[162970] = actions(7208);
	v->a[162971] = 2;
	v->a[162972] = anon_sym_EQ_EQ;
	v->a[162973] = anon_sym_BANG_EQ;
	v->a[162974] = actions(7210);
	v->a[162975] = 2;
	v->a[162976] = anon_sym_LT;
	v->a[162977] = anon_sym_GT;
	v->a[162978] = actions(7212);
	v->a[162979] = 2;
	small_parse_table_8149(v);
}

void	small_parse_table_8149(t_small_parse_table_array *v)
{
	v->a[162980] = anon_sym_LT_EQ;
	v->a[162981] = anon_sym_GT_EQ;
	v->a[162982] = actions(7214);
	v->a[162983] = 2;
	v->a[162984] = anon_sym_LT_LT;
	v->a[162985] = anon_sym_GT_GT;
	v->a[162986] = actions(7216);
	v->a[162987] = 2;
	v->a[162988] = anon_sym_PLUS;
	v->a[162989] = anon_sym_DASH;
	v->a[162990] = actions(7218);
	v->a[162991] = 3;
	v->a[162992] = anon_sym_STAR;
	v->a[162993] = anon_sym_SLASH;
	v->a[162994] = anon_sym_PERCENT;
	v->a[162995] = actions(6805);
	v->a[162996] = 13;
	v->a[162997] = anon_sym_RPAREN_RPAREN;
	v->a[162998] = anon_sym_PLUS_EQ;
	v->a[162999] = anon_sym_DASH_EQ;
	small_parse_table_8150(v);
}

/* EOF small_parse_table_1629.c */
