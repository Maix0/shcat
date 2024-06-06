/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1199.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5995(t_small_parse_table_array *v)
{
	v->a[119900] = 1;
	v->a[119901] = anon_sym_BQUOTE;
	v->a[119902] = actions(6489);
	v->a[119903] = 1;
	v->a[119904] = anon_sym_DOLLAR_BQUOTE;
	v->a[119905] = actions(6491);
	v->a[119906] = 1;
	v->a[119907] = sym__comment_word;
	v->a[119908] = actions(6997);
	v->a[119909] = 1;
	v->a[119910] = anon_sym_DOLLAR;
	v->a[119911] = actions(6483);
	v->a[119912] = 3;
	v->a[119913] = sym_test_operator;
	v->a[119914] = sym__bare_dollar;
	v->a[119915] = sym_raw_string;
	v->a[119916] = state(2831);
	v->a[119917] = 7;
	v->a[119918] = sym_arithmetic_expansion;
	v->a[119919] = sym_brace_expression;
	small_parse_table_5996(v);
}

void	small_parse_table_5996(t_small_parse_table_array *v)
{
	v->a[119920] = sym_string;
	v->a[119921] = sym_number;
	v->a[119922] = sym_simple_expansion;
	v->a[119923] = sym_expansion;
	v->a[119924] = sym_command_substitution;
	v->a[119925] = 7;
	v->a[119926] = actions(3);
	v->a[119927] = 1;
	v->a[119928] = sym_comment;
	v->a[119929] = actions(5443);
	v->a[119930] = 1;
	v->a[119931] = aux_sym_heredoc_redirect_token1;
	v->a[119932] = actions(6041);
	v->a[119933] = 1;
	v->a[119934] = sym_file_descriptor;
	v->a[119935] = state(2311);
	v->a[119936] = 1;
	v->a[119937] = sym_file_redirect;
	v->a[119938] = actions(5401);
	v->a[119939] = 2;
	small_parse_table_5997(v);
}

void	small_parse_table_5997(t_small_parse_table_array *v)
{
	v->a[119940] = anon_sym_LT_AMP_DASH;
	v->a[119941] = anon_sym_GT_AMP_DASH;
	v->a[119942] = actions(5399);
	v->a[119943] = 8;
	v->a[119944] = anon_sym_LT;
	v->a[119945] = anon_sym_GT;
	v->a[119946] = anon_sym_GT_GT;
	v->a[119947] = anon_sym_AMP_GT;
	v->a[119948] = anon_sym_AMP_GT_GT;
	v->a[119949] = anon_sym_LT_AMP;
	v->a[119950] = anon_sym_GT_AMP;
	v->a[119951] = anon_sym_GT_PIPE;
	v->a[119952] = actions(5441);
	v->a[119953] = 10;
	v->a[119954] = anon_sym_PIPE;
	v->a[119955] = anon_sym_SEMI_SEMI;
	v->a[119956] = anon_sym_PIPE_AMP;
	v->a[119957] = anon_sym_AMP_AMP;
	v->a[119958] = anon_sym_PIPE_PIPE;
	v->a[119959] = anon_sym_LT_LT;
	small_parse_table_5998(v);
}

void	small_parse_table_5998(t_small_parse_table_array *v)
{
	v->a[119960] = anon_sym_LT_LT_DASH;
	v->a[119961] = anon_sym_AMP;
	v->a[119962] = anon_sym_BQUOTE;
	v->a[119963] = anon_sym_SEMI;
	v->a[119964] = 16;
	v->a[119965] = actions(3);
	v->a[119966] = 1;
	v->a[119967] = sym_comment;
	v->a[119968] = actions(2362);
	v->a[119969] = 1;
	v->a[119970] = aux_sym_number_token1;
	v->a[119971] = actions(2364);
	v->a[119972] = 1;
	v->a[119973] = aux_sym_number_token2;
	v->a[119974] = actions(2368);
	v->a[119975] = 1;
	v->a[119976] = anon_sym_DOLLAR_LPAREN;
	v->a[119977] = actions(2376);
	v->a[119978] = 1;
	v->a[119979] = sym__brace_start;
	small_parse_table_5999(v);
}

void	small_parse_table_5999(t_small_parse_table_array *v)
{
	v->a[119980] = actions(6811);
	v->a[119981] = 1;
	v->a[119982] = sym_word;
	v->a[119983] = actions(6813);
	v->a[119984] = 1;
	v->a[119985] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[119986] = actions(6815);
	v->a[119987] = 1;
	v->a[119988] = sym__special_character;
	v->a[119989] = actions(6817);
	v->a[119990] = 1;
	v->a[119991] = anon_sym_DQUOTE;
	v->a[119992] = actions(6821);
	v->a[119993] = 1;
	v->a[119994] = anon_sym_DOLLAR_LBRACE;
	v->a[119995] = actions(6823);
	v->a[119996] = 1;
	v->a[119997] = anon_sym_BQUOTE;
	v->a[119998] = actions(6825);
	v->a[119999] = 1;
	small_parse_table_6000(v);
}

/* EOF small_parse_table_1199.c */
