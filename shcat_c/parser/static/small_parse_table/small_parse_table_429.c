/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_429.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2145(t_small_parse_table_array *v)
{
	v->a[42900] = anon_sym_GT_GT;
	v->a[42901] = anon_sym_LPAREN;
	v->a[42902] = anon_sym_esac;
	v->a[42903] = anon_sym_SEMI_SEMI;
	v->a[42904] = anon_sym_SEMI_AMP;
	v->a[42905] = anon_sym_SEMI_SEMI_AMP;
	v->a[42906] = anon_sym_PIPE_AMP;
	v->a[42907] = anon_sym_EQ_TILDE;
	v->a[42908] = anon_sym_AMP_GT;
	v->a[42909] = anon_sym_AMP_GT_GT;
	v->a[42910] = anon_sym_LT_AMP;
	v->a[42911] = anon_sym_GT_AMP;
	v->a[42912] = anon_sym_GT_PIPE;
	v->a[42913] = anon_sym_LT_AMP_DASH;
	v->a[42914] = anon_sym_GT_AMP_DASH;
	v->a[42915] = anon_sym_LT_LT_DASH;
	v->a[42916] = anon_sym_LT_LT_LT;
	v->a[42917] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[42918] = anon_sym_DOLLAR_LBRACK;
	v->a[42919] = anon_sym_DOLLAR;
	small_parse_table_2146(v);
}

void	small_parse_table_2146(t_small_parse_table_array *v)
{
	v->a[42920] = sym__special_character;
	v->a[42921] = anon_sym_DQUOTE;
	v->a[42922] = sym_raw_string;
	v->a[42923] = sym_ansi_c_string;
	v->a[42924] = aux_sym_number_token1;
	v->a[42925] = aux_sym_number_token2;
	v->a[42926] = anon_sym_DOLLAR_LBRACE;
	v->a[42927] = anon_sym_DOLLAR_LPAREN;
	v->a[42928] = anon_sym_BQUOTE;
	v->a[42929] = anon_sym_DOLLAR_BQUOTE;
	v->a[42930] = anon_sym_LT_LPAREN;
	v->a[42931] = anon_sym_GT_LPAREN;
	v->a[42932] = sym_word;
	v->a[42933] = 8;
	v->a[42934] = actions(3);
	v->a[42935] = 1;
	v->a[42936] = sym_comment;
	v->a[42937] = actions(262);
	v->a[42938] = 1;
	v->a[42939] = anon_sym_DQUOTE;
	small_parse_table_2147(v);
}

void	small_parse_table_2147(t_small_parse_table_array *v)
{
	v->a[42940] = actions(1241);
	v->a[42941] = 1;
	v->a[42942] = sym_test_operator;
	v->a[42943] = actions(5162);
	v->a[42944] = 1;
	v->a[42945] = sym_variable_name;
	v->a[42946] = state(2734);
	v->a[42947] = 1;
	v->a[42948] = sym_string;
	v->a[42949] = actions(5160);
	v->a[42950] = 2;
	v->a[42951] = aux_sym__simple_variable_name_token1;
	v->a[42952] = aux_sym__multiline_variable_name_token1;
	v->a[42953] = actions(5158);
	v->a[42954] = 9;
	v->a[42955] = anon_sym_DASH;
	v->a[42956] = anon_sym_STAR;
	v->a[42957] = anon_sym_BANG;
	v->a[42958] = anon_sym_QMARK;
	v->a[42959] = anon_sym_DOLLAR;
	small_parse_table_2148(v);
}

void	small_parse_table_2148(t_small_parse_table_array *v)
{
	v->a[42960] = anon_sym_POUND;
	v->a[42961] = anon_sym_AT2;
	v->a[42962] = anon_sym_0;
	v->a[42963] = anon_sym__;
	v->a[42964] = actions(1239);
	v->a[42965] = 33;
	v->a[42966] = anon_sym_EQ;
	v->a[42967] = anon_sym_PLUS_PLUS;
	v->a[42968] = anon_sym_DASH_DASH;
	v->a[42969] = anon_sym_PLUS_EQ;
	v->a[42970] = anon_sym_DASH_EQ;
	v->a[42971] = anon_sym_STAR_EQ;
	v->a[42972] = anon_sym_SLASH_EQ;
	v->a[42973] = anon_sym_PERCENT_EQ;
	v->a[42974] = anon_sym_STAR_STAR_EQ;
	v->a[42975] = anon_sym_LT_LT_EQ;
	v->a[42976] = anon_sym_GT_GT_EQ;
	v->a[42977] = anon_sym_AMP_EQ;
	v->a[42978] = anon_sym_CARET_EQ;
	v->a[42979] = anon_sym_PIPE_EQ;
	small_parse_table_2149(v);
}

void	small_parse_table_2149(t_small_parse_table_array *v)
{
	v->a[42980] = anon_sym_PIPE_PIPE;
	v->a[42981] = anon_sym_AMP_AMP;
	v->a[42982] = anon_sym_PIPE;
	v->a[42983] = anon_sym_CARET;
	v->a[42984] = anon_sym_AMP;
	v->a[42985] = anon_sym_EQ_EQ;
	v->a[42986] = anon_sym_BANG_EQ;
	v->a[42987] = anon_sym_LT;
	v->a[42988] = anon_sym_GT;
	v->a[42989] = anon_sym_LT_EQ;
	v->a[42990] = anon_sym_GT_EQ;
	v->a[42991] = anon_sym_LT_LT;
	v->a[42992] = anon_sym_GT_GT;
	v->a[42993] = anon_sym_PLUS;
	v->a[42994] = anon_sym_SLASH;
	v->a[42995] = anon_sym_PERCENT;
	v->a[42996] = anon_sym_STAR_STAR;
	v->a[42997] = anon_sym_RPAREN;
	v->a[42998] = anon_sym_EQ_TILDE;
	v->a[42999] = 6;
	small_parse_table_2150(v);
}

/* EOF small_parse_table_429.c */
