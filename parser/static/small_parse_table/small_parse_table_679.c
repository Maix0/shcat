/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_679.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3395(t_small_parse_table_array *v)
{
	v->a[67900] = anon_sym_GT;
	v->a[67901] = actions(4130);
	v->a[67902] = 2;
	v->a[67903] = anon_sym_GT_GT;
	v->a[67904] = anon_sym_LT_LT;
	v->a[67905] = actions(4142);
	v->a[67906] = 2;
	v->a[67907] = anon_sym_EQ_EQ;
	v->a[67908] = anon_sym_BANG_EQ;
	v->a[67909] = actions(4144);
	v->a[67910] = 2;
	v->a[67911] = anon_sym_LT_EQ;
	v->a[67912] = anon_sym_GT_EQ;
	v->a[67913] = actions(4146);
	v->a[67914] = 2;
	v->a[67915] = anon_sym_PLUS;
	v->a[67916] = anon_sym_DASH;
	v->a[67917] = actions(4152);
	v->a[67918] = 2;
	v->a[67919] = anon_sym_PLUS_PLUS2;
	small_parse_table_3396(v);
}

void	small_parse_table_3396(t_small_parse_table_array *v)
{
	v->a[67920] = anon_sym_DASH_DASH2;
	v->a[67921] = actions(4148);
	v->a[67922] = 3;
	v->a[67923] = anon_sym_STAR;
	v->a[67924] = anon_sym_SLASH;
	v->a[67925] = anon_sym_PERCENT;
	v->a[67926] = actions(4136);
	v->a[67927] = 10;
	v->a[67928] = anon_sym_PLUS_EQ;
	v->a[67929] = anon_sym_DASH_EQ;
	v->a[67930] = anon_sym_STAR_EQ;
	v->a[67931] = anon_sym_SLASH_EQ;
	v->a[67932] = anon_sym_PERCENT_EQ;
	v->a[67933] = anon_sym_LT_LT_EQ;
	v->a[67934] = anon_sym_GT_GT_EQ;
	v->a[67935] = anon_sym_AMP_EQ;
	v->a[67936] = anon_sym_CARET_EQ;
	v->a[67937] = anon_sym_PIPE_EQ;
	v->a[67938] = 3;
	v->a[67939] = actions(57);
	small_parse_table_3397(v);
}

void	small_parse_table_3397(t_small_parse_table_array *v)
{
	v->a[67940] = 1;
	v->a[67941] = sym_comment;
	v->a[67942] = actions(2772);
	v->a[67943] = 14;
	v->a[67944] = anon_sym_PIPE;
	v->a[67945] = anon_sym_LT;
	v->a[67946] = anon_sym_GT;
	v->a[67947] = anon_sym_AMP_GT;
	v->a[67948] = anon_sym_LT_AMP;
	v->a[67949] = anon_sym_GT_AMP;
	v->a[67950] = anon_sym_LT_LT;
	v->a[67951] = anon_sym_DOLLAR;
	v->a[67952] = aux_sym_number_token1;
	v->a[67953] = aux_sym_number_token2;
	v->a[67954] = anon_sym_DOLLAR_LPAREN;
	v->a[67955] = anon_sym_BQUOTE;
	v->a[67956] = aux_sym__simple_variable_name_token1;
	v->a[67957] = sym_word;
	v->a[67958] = actions(2774);
	v->a[67959] = 21;
	small_parse_table_3398(v);
}

void	small_parse_table_3398(t_small_parse_table_array *v)
{
	v->a[67960] = sym_file_descriptor;
	v->a[67961] = sym__concat;
	v->a[67962] = sym_variable_name;
	v->a[67963] = sym_test_operator;
	v->a[67964] = sym__brace_start;
	v->a[67965] = anon_sym_PIPE_AMP;
	v->a[67966] = anon_sym_AMP_AMP;
	v->a[67967] = anon_sym_PIPE_PIPE;
	v->a[67968] = anon_sym_GT_GT;
	v->a[67969] = anon_sym_AMP_GT_GT;
	v->a[67970] = anon_sym_GT_PIPE;
	v->a[67971] = anon_sym_LT_AMP_DASH;
	v->a[67972] = anon_sym_GT_AMP_DASH;
	v->a[67973] = anon_sym_LT_LT_DASH;
	v->a[67974] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[67975] = aux_sym_concatenation_token1;
	v->a[67976] = sym__special_character;
	v->a[67977] = anon_sym_DQUOTE;
	v->a[67978] = sym_raw_string;
	v->a[67979] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_3399(v);
}

void	small_parse_table_3399(t_small_parse_table_array *v)
{
	v->a[67980] = anon_sym_DOLLAR_BQUOTE;
	v->a[67981] = 5;
	v->a[67982] = actions(57);
	v->a[67983] = 1;
	v->a[67984] = sym_comment;
	v->a[67985] = state(1470);
	v->a[67986] = 1;
	v->a[67987] = aux_sym_concatenation_repeat1;
	v->a[67988] = actions(4252);
	v->a[67989] = 2;
	v->a[67990] = sym__concat;
	v->a[67991] = aux_sym_concatenation_token1;
	v->a[67992] = actions(3104);
	v->a[67993] = 14;
	v->a[67994] = anon_sym_PIPE;
	v->a[67995] = anon_sym_LT;
	v->a[67996] = anon_sym_GT;
	v->a[67997] = anon_sym_AMP_GT;
	v->a[67998] = anon_sym_LT_AMP;
	v->a[67999] = anon_sym_GT_AMP;
	small_parse_table_3400(v);
}

/* EOF small_parse_table_679.c */
