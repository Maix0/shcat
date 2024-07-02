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
	v->a[48900] = anon_sym_LT_LT;
	v->a[48901] = anon_sym_LT_LT_DASH;
	v->a[48902] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[48903] = anon_sym_DOLLAR;
	v->a[48904] = anon_sym_DQUOTE;
	v->a[48905] = sym_raw_string;
	v->a[48906] = sym_number;
	v->a[48907] = anon_sym_DOLLAR_LBRACE;
	v->a[48908] = anon_sym_DOLLAR_LPAREN;
	v->a[48909] = anon_sym_BQUOTE;
	v->a[48910] = sym_word;
	v->a[48911] = 4;
	v->a[48912] = actions(3);
	v->a[48913] = 1;
	v->a[48914] = sym_comment;
	v->a[48915] = actions(1424);
	v->a[48916] = 1;
	v->a[48917] = anon_sym_BQUOTE;
	v->a[48918] = actions(1426);
	v->a[48919] = 2;
	small_parse_table_2446(v);
}

void	small_parse_table_2446(t_small_parse_table_array *v)
{
	v->a[48920] = sym_file_descriptor;
	v->a[48921] = sym_variable_name;
	v->a[48922] = actions(1422);
	v->a[48923] = 23;
	v->a[48924] = anon_sym_for;
	v->a[48925] = anon_sym_while;
	v->a[48926] = anon_sym_until;
	v->a[48927] = anon_sym_if;
	v->a[48928] = anon_sym_case;
	v->a[48929] = anon_sym_LPAREN;
	v->a[48930] = anon_sym_LBRACE;
	v->a[48931] = anon_sym_BANG;
	v->a[48932] = anon_sym_LT;
	v->a[48933] = anon_sym_GT;
	v->a[48934] = anon_sym_GT_GT;
	v->a[48935] = anon_sym_LT_AMP;
	v->a[48936] = anon_sym_GT_AMP;
	v->a[48937] = anon_sym_GT_PIPE;
	v->a[48938] = anon_sym_LT_GT;
	v->a[48939] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_2447(v);
}

void	small_parse_table_2447(t_small_parse_table_array *v)
{
	v->a[48940] = anon_sym_DOLLAR;
	v->a[48941] = anon_sym_DQUOTE;
	v->a[48942] = sym_raw_string;
	v->a[48943] = sym_number;
	v->a[48944] = anon_sym_DOLLAR_LBRACE;
	v->a[48945] = anon_sym_DOLLAR_LPAREN;
	v->a[48946] = sym_word;
	v->a[48947] = 6;
	v->a[48948] = actions(3);
	v->a[48949] = 1;
	v->a[48950] = sym_comment;
	v->a[48951] = actions(1194);
	v->a[48952] = 1;
	v->a[48953] = sym_file_descriptor;
	v->a[48954] = actions(1287);
	v->a[48955] = 1;
	v->a[48956] = aux_sym_concatenation_token1;
	v->a[48957] = actions(1289);
	v->a[48958] = 1;
	v->a[48959] = sym__concat;
	small_parse_table_2448(v);
}

void	small_parse_table_2448(t_small_parse_table_array *v)
{
	v->a[48960] = state(835);
	v->a[48961] = 1;
	v->a[48962] = aux_sym_concatenation_repeat1;
	v->a[48963] = actions(1196);
	v->a[48964] = 22;
	v->a[48965] = anon_sym_PIPE;
	v->a[48966] = anon_sym_AMP_AMP;
	v->a[48967] = anon_sym_PIPE_PIPE;
	v->a[48968] = anon_sym_LT;
	v->a[48969] = anon_sym_GT;
	v->a[48970] = anon_sym_GT_GT;
	v->a[48971] = anon_sym_LT_AMP;
	v->a[48972] = anon_sym_GT_AMP;
	v->a[48973] = anon_sym_GT_PIPE;
	v->a[48974] = anon_sym_LT_GT;
	v->a[48975] = anon_sym_LT_LT;
	v->a[48976] = anon_sym_LT_LT_DASH;
	v->a[48977] = aux_sym_heredoc_redirect_token1;
	v->a[48978] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[48979] = anon_sym_DOLLAR;
	small_parse_table_2449(v);
}

void	small_parse_table_2449(t_small_parse_table_array *v)
{
	v->a[48980] = anon_sym_DQUOTE;
	v->a[48981] = sym_raw_string;
	v->a[48982] = sym_number;
	v->a[48983] = anon_sym_DOLLAR_LBRACE;
	v->a[48984] = anon_sym_DOLLAR_LPAREN;
	v->a[48985] = anon_sym_BQUOTE;
	v->a[48986] = sym_word;
	v->a[48987] = 3;
	v->a[48988] = actions(3);
	v->a[48989] = 1;
	v->a[48990] = sym_comment;
	v->a[48991] = actions(839);
	v->a[48992] = 3;
	v->a[48993] = sym_file_descriptor;
	v->a[48994] = sym__concat;
	v->a[48995] = sym__bare_dollar;
	v->a[48996] = actions(837);
	v->a[48997] = 23;
	v->a[48998] = anon_sym_LPAREN;
	v->a[48999] = anon_sym_PIPE;
	small_parse_table_2450(v);
}

/* EOF small_parse_table_489.c */
