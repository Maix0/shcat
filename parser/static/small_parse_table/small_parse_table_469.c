/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_469.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2345(t_small_parse_table_array *v)
{
	v->a[46900] = anon_sym_AMP_GT_GT;
	v->a[46901] = anon_sym_LT_AMP;
	v->a[46902] = anon_sym_GT_AMP;
	v->a[46903] = anon_sym_GT_PIPE;
	v->a[46904] = anon_sym_LT_AMP_DASH;
	v->a[46905] = anon_sym_GT_AMP_DASH;
	v->a[46906] = anon_sym_LT_LT;
	v->a[46907] = anon_sym_LT_LT_DASH;
	v->a[46908] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[46909] = anon_sym_AMP;
	v->a[46910] = anon_sym_DOLLAR;
	v->a[46911] = anon_sym_DQUOTE;
	v->a[46912] = sym_raw_string;
	v->a[46913] = aux_sym_number_token1;
	v->a[46914] = aux_sym_number_token2;
	v->a[46915] = anon_sym_DOLLAR_LBRACE;
	v->a[46916] = anon_sym_DOLLAR_LPAREN;
	v->a[46917] = anon_sym_BQUOTE;
	v->a[46918] = anon_sym_DOLLAR_BQUOTE;
	v->a[46919] = sym_word;
	small_parse_table_2346(v);
}

void	small_parse_table_2346(t_small_parse_table_array *v)
{
	v->a[46920] = anon_sym_SEMI;
	v->a[46921] = 6;
	v->a[46922] = actions(3);
	v->a[46923] = 1;
	v->a[46924] = sym_comment;
	v->a[46925] = actions(3427);
	v->a[46926] = 1;
	v->a[46927] = aux_sym_concatenation_token1;
	v->a[46928] = actions(3654);
	v->a[46929] = 1;
	v->a[46930] = sym__concat;
	v->a[46931] = state(801);
	v->a[46932] = 1;
	v->a[46933] = aux_sym_concatenation_repeat1;
	v->a[46934] = actions(2690);
	v->a[46935] = 5;
	v->a[46936] = sym_file_descriptor;
	v->a[46937] = sym_test_operator;
	v->a[46938] = sym__bare_dollar;
	v->a[46939] = sym__brace_start;
	small_parse_table_2347(v);
}

void	small_parse_table_2347(t_small_parse_table_array *v)
{
	v->a[46940] = aux_sym_heredoc_redirect_token1;
	v->a[46941] = actions(2688);
	v->a[46942] = 31;
	v->a[46943] = anon_sym_PIPE;
	v->a[46944] = anon_sym_SEMI_SEMI;
	v->a[46945] = anon_sym_PIPE_AMP;
	v->a[46946] = anon_sym_AMP_AMP;
	v->a[46947] = anon_sym_PIPE_PIPE;
	v->a[46948] = anon_sym_LT;
	v->a[46949] = anon_sym_GT;
	v->a[46950] = anon_sym_GT_GT;
	v->a[46951] = anon_sym_AMP_GT;
	v->a[46952] = anon_sym_AMP_GT_GT;
	v->a[46953] = anon_sym_LT_AMP;
	v->a[46954] = anon_sym_GT_AMP;
	v->a[46955] = anon_sym_GT_PIPE;
	v->a[46956] = anon_sym_LT_AMP_DASH;
	v->a[46957] = anon_sym_GT_AMP_DASH;
	v->a[46958] = anon_sym_LT_LT;
	v->a[46959] = anon_sym_LT_LT_DASH;
	small_parse_table_2348(v);
}

void	small_parse_table_2348(t_small_parse_table_array *v)
{
	v->a[46960] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[46961] = anon_sym_AMP;
	v->a[46962] = anon_sym_DOLLAR;
	v->a[46963] = sym__special_character;
	v->a[46964] = anon_sym_DQUOTE;
	v->a[46965] = sym_raw_string;
	v->a[46966] = aux_sym_number_token1;
	v->a[46967] = aux_sym_number_token2;
	v->a[46968] = anon_sym_DOLLAR_LBRACE;
	v->a[46969] = anon_sym_DOLLAR_LPAREN;
	v->a[46970] = anon_sym_BQUOTE;
	v->a[46971] = anon_sym_DOLLAR_BQUOTE;
	v->a[46972] = sym_word;
	v->a[46973] = anon_sym_SEMI;
	v->a[46974] = 3;
	v->a[46975] = actions(3);
	v->a[46976] = 1;
	v->a[46977] = sym_comment;
	v->a[46978] = actions(2664);
	v->a[46979] = 5;
	small_parse_table_2349(v);
}

void	small_parse_table_2349(t_small_parse_table_array *v)
{
	v->a[46980] = sym_file_descriptor;
	v->a[46981] = sym_variable_name;
	v->a[46982] = sym_test_operator;
	v->a[46983] = sym__brace_start;
	v->a[46984] = aux_sym_heredoc_redirect_token1;
	v->a[46985] = actions(2662);
	v->a[46986] = 34;
	v->a[46987] = anon_sym_PIPE;
	v->a[46988] = anon_sym_SEMI_SEMI;
	v->a[46989] = anon_sym_SEMI_AMP;
	v->a[46990] = anon_sym_SEMI_SEMI_AMP;
	v->a[46991] = anon_sym_PIPE_AMP;
	v->a[46992] = anon_sym_AMP_AMP;
	v->a[46993] = anon_sym_PIPE_PIPE;
	v->a[46994] = anon_sym_LT;
	v->a[46995] = anon_sym_GT;
	v->a[46996] = anon_sym_GT_GT;
	v->a[46997] = anon_sym_AMP_GT;
	v->a[46998] = anon_sym_AMP_GT_GT;
	v->a[46999] = anon_sym_LT_AMP;
	small_parse_table_2350(v);
}

/* EOF small_parse_table_469.c */
