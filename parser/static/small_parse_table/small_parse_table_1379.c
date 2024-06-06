/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1379.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6895(t_small_parse_table_array *v)
{
	v->a[137900] = actions(7760);
	v->a[137901] = 1;
	v->a[137902] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[137903] = actions(7766);
	v->a[137904] = 1;
	v->a[137905] = sym_string_content;
	v->a[137906] = actions(7768);
	v->a[137907] = 1;
	v->a[137908] = anon_sym_DOLLAR_LBRACE;
	v->a[137909] = actions(7770);
	v->a[137910] = 1;
	v->a[137911] = anon_sym_DOLLAR_LPAREN;
	v->a[137912] = actions(7772);
	v->a[137913] = 1;
	v->a[137914] = anon_sym_BQUOTE;
	v->a[137915] = actions(7774);
	v->a[137916] = 1;
	v->a[137917] = anon_sym_DOLLAR_BQUOTE;
	v->a[137918] = actions(8057);
	v->a[137919] = 1;
	small_parse_table_6896(v);
}

void	small_parse_table_6896(t_small_parse_table_array *v)
{
	v->a[137920] = anon_sym_DOLLAR;
	v->a[137921] = state(3061);
	v->a[137922] = 1;
	v->a[137923] = aux_sym_string_repeat1;
	v->a[137924] = state(3218);
	v->a[137925] = 4;
	v->a[137926] = sym_arithmetic_expansion;
	v->a[137927] = sym_simple_expansion;
	v->a[137928] = sym_expansion;
	v->a[137929] = sym_command_substitution;
	v->a[137930] = 7;
	v->a[137931] = actions(3);
	v->a[137932] = 1;
	v->a[137933] = sym_comment;
	v->a[137934] = actions(7754);
	v->a[137935] = 1;
	v->a[137936] = aux_sym__simple_variable_name_token1;
	v->a[137937] = actions(7758);
	v->a[137938] = 1;
	v->a[137939] = sym_variable_name;
	small_parse_table_6897(v);
}

void	small_parse_table_6897(t_small_parse_table_array *v)
{
	v->a[137940] = actions(8059);
	v->a[137941] = 1;
	v->a[137942] = anon_sym_RBRACE3;
	v->a[137943] = state(3599);
	v->a[137944] = 1;
	v->a[137945] = sym__expansion_body;
	v->a[137946] = actions(7756);
	v->a[137947] = 2;
	v->a[137948] = anon_sym_0;
	v->a[137949] = anon_sym__;
	v->a[137950] = actions(7750);
	v->a[137951] = 7;
	v->a[137952] = anon_sym_BANG;
	v->a[137953] = anon_sym_DASH;
	v->a[137954] = anon_sym_STAR;
	v->a[137955] = anon_sym_QMARK;
	v->a[137956] = anon_sym_DOLLAR;
	v->a[137957] = anon_sym_POUND;
	v->a[137958] = anon_sym_AT;
	v->a[137959] = 11;
	small_parse_table_6898(v);
}

void	small_parse_table_6898(t_small_parse_table_array *v)
{
	v->a[137960] = actions(3);
	v->a[137961] = 1;
	v->a[137962] = sym_comment;
	v->a[137963] = actions(7674);
	v->a[137964] = 1;
	v->a[137965] = anon_sym_DQUOTE;
	v->a[137966] = actions(7760);
	v->a[137967] = 1;
	v->a[137968] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[137969] = actions(7766);
	v->a[137970] = 1;
	v->a[137971] = sym_string_content;
	v->a[137972] = actions(7768);
	v->a[137973] = 1;
	v->a[137974] = anon_sym_DOLLAR_LBRACE;
	v->a[137975] = actions(7770);
	v->a[137976] = 1;
	v->a[137977] = anon_sym_DOLLAR_LPAREN;
	v->a[137978] = actions(7772);
	v->a[137979] = 1;
	small_parse_table_6899(v);
}

void	small_parse_table_6899(t_small_parse_table_array *v)
{
	v->a[137980] = anon_sym_BQUOTE;
	v->a[137981] = actions(7774);
	v->a[137982] = 1;
	v->a[137983] = anon_sym_DOLLAR_BQUOTE;
	v->a[137984] = actions(8061);
	v->a[137985] = 1;
	v->a[137986] = anon_sym_DOLLAR;
	v->a[137987] = state(3061);
	v->a[137988] = 1;
	v->a[137989] = aux_sym_string_repeat1;
	v->a[137990] = state(3218);
	v->a[137991] = 4;
	v->a[137992] = sym_arithmetic_expansion;
	v->a[137993] = sym_simple_expansion;
	v->a[137994] = sym_expansion;
	v->a[137995] = sym_command_substitution;
	v->a[137996] = 11;
	v->a[137997] = actions(3);
	v->a[137998] = 1;
	v->a[137999] = sym_comment;
	small_parse_table_6900(v);
}

/* EOF small_parse_table_1379.c */
