/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_639.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3195(t_small_parse_table_array *v)
{
	v->a[63900] = actions(2568);
	v->a[63901] = 1;
	v->a[63902] = aux_sym__simple_variable_name_token1;
	v->a[63903] = actions(2570);
	v->a[63904] = 1;
	v->a[63905] = anon_sym_0;
	v->a[63906] = actions(2572);
	v->a[63907] = 1;
	v->a[63908] = sym_variable_name;
	v->a[63909] = actions(2813);
	v->a[63910] = 1;
	v->a[63911] = anon_sym_RBRACE;
	v->a[63912] = state(1667);
	v->a[63913] = 1;
	v->a[63914] = sym__expansion_body;
	v->a[63915] = actions(2564);
	v->a[63916] = 6;
	v->a[63917] = anon_sym_BANG;
	v->a[63918] = anon_sym_DASH;
	v->a[63919] = anon_sym_STAR;
	small_parse_table_3196(v);
}

void	small_parse_table_3196(t_small_parse_table_array *v)
{
	v->a[63920] = anon_sym_QMARK;
	v->a[63921] = anon_sym_DOLLAR;
	v->a[63922] = anon_sym_AT;
	v->a[63923] = 10;
	v->a[63924] = actions(3);
	v->a[63925] = 1;
	v->a[63926] = sym_comment;
	v->a[63927] = actions(2548);
	v->a[63928] = 1;
	v->a[63929] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[63930] = actions(2554);
	v->a[63931] = 1;
	v->a[63932] = sym_string_content;
	v->a[63933] = actions(2556);
	v->a[63934] = 1;
	v->a[63935] = anon_sym_DOLLAR_LBRACE;
	v->a[63936] = actions(2558);
	v->a[63937] = 1;
	v->a[63938] = anon_sym_DOLLAR_LPAREN;
	v->a[63939] = actions(2560);
	small_parse_table_3197(v);
}

void	small_parse_table_3197(t_small_parse_table_array *v)
{
	v->a[63940] = 1;
	v->a[63941] = anon_sym_BQUOTE;
	v->a[63942] = actions(2815);
	v->a[63943] = 1;
	v->a[63944] = anon_sym_DOLLAR;
	v->a[63945] = actions(2817);
	v->a[63946] = 1;
	v->a[63947] = anon_sym_DQUOTE;
	v->a[63948] = state(1393);
	v->a[63949] = 1;
	v->a[63950] = aux_sym_string_repeat1;
	v->a[63951] = state(1477);
	v->a[63952] = 4;
	v->a[63953] = sym_arithmetic_expansion;
	v->a[63954] = sym_simple_expansion;
	v->a[63955] = sym_expansion;
	v->a[63956] = sym_command_substitution;
	v->a[63957] = 3;
	v->a[63958] = actions(407);
	v->a[63959] = 1;
	small_parse_table_3198(v);
}

void	small_parse_table_3198(t_small_parse_table_array *v)
{
	v->a[63960] = sym_comment;
	v->a[63961] = actions(1789);
	v->a[63962] = 4;
	v->a[63963] = anon_sym_PIPE;
	v->a[63964] = anon_sym_LT;
	v->a[63965] = anon_sym_GT;
	v->a[63966] = anon_sym_LT_LT;
	v->a[63967] = actions(1787);
	v->a[63968] = 8;
	v->a[63969] = anon_sym_AMP_AMP;
	v->a[63970] = anon_sym_PIPE_PIPE;
	v->a[63971] = anon_sym_GT_GT;
	v->a[63972] = anon_sym_LT_AMP;
	v->a[63973] = anon_sym_GT_AMP;
	v->a[63974] = anon_sym_GT_PIPE;
	v->a[63975] = anon_sym_LT_GT;
	v->a[63976] = anon_sym_LT_LT_DASH;
	v->a[63977] = 10;
	v->a[63978] = actions(3);
	v->a[63979] = 1;
	small_parse_table_3199(v);
}

void	small_parse_table_3199(t_small_parse_table_array *v)
{
	v->a[63980] = sym_comment;
	v->a[63981] = actions(2548);
	v->a[63982] = 1;
	v->a[63983] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[63984] = actions(2554);
	v->a[63985] = 1;
	v->a[63986] = sym_string_content;
	v->a[63987] = actions(2556);
	v->a[63988] = 1;
	v->a[63989] = anon_sym_DOLLAR_LBRACE;
	v->a[63990] = actions(2558);
	v->a[63991] = 1;
	v->a[63992] = anon_sym_DOLLAR_LPAREN;
	v->a[63993] = actions(2560);
	v->a[63994] = 1;
	v->a[63995] = anon_sym_BQUOTE;
	v->a[63996] = actions(2819);
	v->a[63997] = 1;
	v->a[63998] = anon_sym_DOLLAR;
	v->a[63999] = actions(2821);
	small_parse_table_3200(v);
}

/* EOF small_parse_table_639.c */
