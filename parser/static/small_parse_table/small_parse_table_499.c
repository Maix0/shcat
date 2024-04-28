/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_499.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2495(t_small_parse_table_array *v)
{
	v->a[49900] = aux_sym_heredoc_redirect_token1;
	v->a[49901] = actions(5393);
	v->a[49902] = 40;
	v->a[49903] = anon_sym_LPAREN_LPAREN;
	v->a[49904] = anon_sym_SEMI;
	v->a[49905] = anon_sym_PIPE_PIPE;
	v->a[49906] = anon_sym_AMP_AMP;
	v->a[49907] = anon_sym_PIPE;
	v->a[49908] = anon_sym_AMP;
	v->a[49909] = anon_sym_LT;
	v->a[49910] = anon_sym_GT;
	v->a[49911] = anon_sym_LT_LT;
	v->a[49912] = anon_sym_GT_GT;
	v->a[49913] = anon_sym_esac;
	v->a[49914] = anon_sym_SEMI_SEMI;
	v->a[49915] = anon_sym_SEMI_AMP;
	v->a[49916] = anon_sym_SEMI_SEMI_AMP;
	v->a[49917] = anon_sym_PIPE_AMP;
	v->a[49918] = anon_sym_AMP_GT;
	v->a[49919] = anon_sym_AMP_GT_GT;
	small_parse_table_2496(v);
}

void	small_parse_table_2496(t_small_parse_table_array *v)
{
	v->a[49920] = anon_sym_LT_AMP;
	v->a[49921] = anon_sym_GT_AMP;
	v->a[49922] = anon_sym_GT_PIPE;
	v->a[49923] = anon_sym_LT_AMP_DASH;
	v->a[49924] = anon_sym_GT_AMP_DASH;
	v->a[49925] = anon_sym_LT_LT_DASH;
	v->a[49926] = anon_sym_LT_LT_LT;
	v->a[49927] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[49928] = anon_sym_DOLLAR_LBRACK;
	v->a[49929] = anon_sym_DOLLAR;
	v->a[49930] = sym__special_character;
	v->a[49931] = anon_sym_DQUOTE;
	v->a[49932] = sym_raw_string;
	v->a[49933] = sym_ansi_c_string;
	v->a[49934] = aux_sym_number_token1;
	v->a[49935] = aux_sym_number_token2;
	v->a[49936] = anon_sym_DOLLAR_LBRACE;
	v->a[49937] = anon_sym_DOLLAR_LPAREN;
	v->a[49938] = anon_sym_BQUOTE;
	v->a[49939] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_2497(v);
}

void	small_parse_table_2497(t_small_parse_table_array *v)
{
	v->a[49940] = anon_sym_LT_LPAREN;
	v->a[49941] = anon_sym_GT_LPAREN;
	v->a[49942] = sym_word;
	v->a[49943] = 8;
	v->a[49944] = actions(3);
	v->a[49945] = 1;
	v->a[49946] = sym_comment;
	v->a[49947] = actions(1241);
	v->a[49948] = 1;
	v->a[49949] = sym_test_operator;
	v->a[49950] = actions(5086);
	v->a[49951] = 1;
	v->a[49952] = anon_sym_DQUOTE;
	v->a[49953] = actions(5090);
	v->a[49954] = 1;
	v->a[49955] = sym_variable_name;
	v->a[49956] = state(2442);
	v->a[49957] = 1;
	v->a[49958] = sym_string;
	v->a[49959] = actions(5088);
	small_parse_table_2498(v);
}

void	small_parse_table_2498(t_small_parse_table_array *v)
{
	v->a[49960] = 2;
	v->a[49961] = aux_sym__simple_variable_name_token1;
	v->a[49962] = aux_sym__multiline_variable_name_token1;
	v->a[49963] = actions(5084);
	v->a[49964] = 9;
	v->a[49965] = anon_sym_DASH;
	v->a[49966] = anon_sym_STAR;
	v->a[49967] = anon_sym_BANG;
	v->a[49968] = anon_sym_QMARK;
	v->a[49969] = anon_sym_DOLLAR;
	v->a[49970] = anon_sym_POUND;
	v->a[49971] = anon_sym_AT2;
	v->a[49972] = anon_sym_0;
	v->a[49973] = anon_sym__;
	v->a[49974] = actions(1239);
	v->a[49975] = 32;
	v->a[49976] = anon_sym_EQ;
	v->a[49977] = anon_sym_PLUS_PLUS;
	v->a[49978] = anon_sym_DASH_DASH;
	v->a[49979] = anon_sym_PLUS_EQ;
	small_parse_table_2499(v);
}

void	small_parse_table_2499(t_small_parse_table_array *v)
{
	v->a[49980] = anon_sym_DASH_EQ;
	v->a[49981] = anon_sym_STAR_EQ;
	v->a[49982] = anon_sym_SLASH_EQ;
	v->a[49983] = anon_sym_PERCENT_EQ;
	v->a[49984] = anon_sym_STAR_STAR_EQ;
	v->a[49985] = anon_sym_LT_LT_EQ;
	v->a[49986] = anon_sym_GT_GT_EQ;
	v->a[49987] = anon_sym_AMP_EQ;
	v->a[49988] = anon_sym_CARET_EQ;
	v->a[49989] = anon_sym_PIPE_EQ;
	v->a[49990] = anon_sym_PIPE_PIPE;
	v->a[49991] = anon_sym_AMP_AMP;
	v->a[49992] = anon_sym_PIPE;
	v->a[49993] = anon_sym_CARET;
	v->a[49994] = anon_sym_AMP;
	v->a[49995] = anon_sym_EQ_EQ;
	v->a[49996] = anon_sym_BANG_EQ;
	v->a[49997] = anon_sym_LT;
	v->a[49998] = anon_sym_GT;
	v->a[49999] = anon_sym_LT_EQ;
	small_parse_table_2500(v);
}

/* EOF small_parse_table_499.c */
