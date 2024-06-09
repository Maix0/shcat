/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_489.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2445(t_small_parse_table_array *v)
{
	v->a[48900] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[48901] = anon_sym_DOLLAR;
	v->a[48902] = anon_sym_DQUOTE;
	v->a[48903] = sym_raw_string;
	v->a[48904] = aux_sym_number_token1;
	v->a[48905] = aux_sym_number_token2;
	v->a[48906] = anon_sym_DOLLAR_LBRACE;
	v->a[48907] = anon_sym_DOLLAR_LPAREN;
	v->a[48908] = anon_sym_BQUOTE;
	v->a[48909] = sym_word;
	v->a[48910] = actions(1703);
	v->a[48911] = 10;
	v->a[48912] = anon_sym_LT;
	v->a[48913] = anon_sym_GT;
	v->a[48914] = anon_sym_GT_GT;
	v->a[48915] = anon_sym_AMP_GT;
	v->a[48916] = anon_sym_AMP_GT_GT;
	v->a[48917] = anon_sym_LT_AMP;
	v->a[48918] = anon_sym_GT_AMP;
	v->a[48919] = anon_sym_GT_PIPE;
	small_parse_table_2446(v);
}

void	small_parse_table_2446(t_small_parse_table_array *v)
{
	v->a[48920] = anon_sym_LT_AMP_DASH;
	v->a[48921] = anon_sym_GT_AMP_DASH;
	v->a[48922] = 14;
	v->a[48923] = actions(3);
	v->a[48924] = 1;
	v->a[48925] = sym_comment;
	v->a[48926] = actions(565);
	v->a[48927] = 1;
	v->a[48928] = sym_file_descriptor;
	v->a[48929] = actions(1749);
	v->a[48930] = 1;
	v->a[48931] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[48932] = actions(1751);
	v->a[48933] = 1;
	v->a[48934] = anon_sym_DOLLAR;
	v->a[48935] = actions(1753);
	v->a[48936] = 1;
	v->a[48937] = anon_sym_DQUOTE;
	v->a[48938] = actions(1755);
	v->a[48939] = 1;
	small_parse_table_2447(v);
}

void	small_parse_table_2447(t_small_parse_table_array *v)
{
	v->a[48940] = aux_sym_number_token1;
	v->a[48941] = actions(1757);
	v->a[48942] = 1;
	v->a[48943] = aux_sym_number_token2;
	v->a[48944] = actions(1759);
	v->a[48945] = 1;
	v->a[48946] = anon_sym_DOLLAR_LBRACE;
	v->a[48947] = actions(1761);
	v->a[48948] = 1;
	v->a[48949] = anon_sym_DOLLAR_LPAREN;
	v->a[48950] = actions(1763);
	v->a[48951] = 1;
	v->a[48952] = anon_sym_BQUOTE;
	v->a[48953] = actions(1747);
	v->a[48954] = 2;
	v->a[48955] = sym_raw_string;
	v->a[48956] = sym_word;
	v->a[48957] = state(710);
	v->a[48958] = 2;
	v->a[48959] = sym_concatenation;
	small_parse_table_2448(v);
}

void	small_parse_table_2448(t_small_parse_table_array *v)
{
	v->a[48960] = aux_sym_for_statement_repeat1;
	v->a[48961] = state(936);
	v->a[48962] = 6;
	v->a[48963] = sym_arithmetic_expansion;
	v->a[48964] = sym_string;
	v->a[48965] = sym_number;
	v->a[48966] = sym_simple_expansion;
	v->a[48967] = sym_expansion;
	v->a[48968] = sym_command_substitution;
	v->a[48969] = actions(567);
	v->a[48970] = 13;
	v->a[48971] = anon_sym_AMP_AMP;
	v->a[48972] = anon_sym_PIPE_PIPE;
	v->a[48973] = anon_sym_LT;
	v->a[48974] = anon_sym_GT;
	v->a[48975] = anon_sym_GT_GT;
	v->a[48976] = anon_sym_AMP_GT;
	v->a[48977] = anon_sym_AMP_GT_GT;
	v->a[48978] = anon_sym_LT_AMP;
	v->a[48979] = anon_sym_GT_AMP;
	small_parse_table_2449(v);
}

void	small_parse_table_2449(t_small_parse_table_array *v)
{
	v->a[48980] = anon_sym_GT_PIPE;
	v->a[48981] = anon_sym_LT_AMP_DASH;
	v->a[48982] = anon_sym_GT_AMP_DASH;
	v->a[48983] = aux_sym_heredoc_redirect_token1;
	v->a[48984] = 3;
	v->a[48985] = actions(3);
	v->a[48986] = 1;
	v->a[48987] = sym_comment;
	v->a[48988] = actions(565);
	v->a[48989] = 2;
	v->a[48990] = sym_file_descriptor;
	v->a[48991] = sym_variable_name;
	v->a[48992] = actions(567);
	v->a[48993] = 30;
	v->a[48994] = anon_sym_esac;
	v->a[48995] = anon_sym_PIPE;
	v->a[48996] = anon_sym_SEMI_SEMI;
	v->a[48997] = anon_sym_AMP_AMP;
	v->a[48998] = anon_sym_PIPE_PIPE;
	v->a[48999] = anon_sym_LT;
	small_parse_table_2450(v);
}

/* EOF small_parse_table_489.c */
