/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_329.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1645(t_small_parse_table_array *v)
{
	v->a[32900] = anon_sym_AMP;
	v->a[32901] = anon_sym_DOLLAR;
	v->a[32902] = anon_sym_DQUOTE;
	v->a[32903] = sym_raw_string;
	v->a[32904] = sym_number;
	v->a[32905] = anon_sym_DOLLAR_LBRACE;
	v->a[32906] = anon_sym_DOLLAR_LPAREN;
	v->a[32907] = anon_sym_BQUOTE;
	v->a[32908] = sym_word;
	v->a[32909] = anon_sym_SEMI;
	v->a[32910] = 4;
	v->a[32911] = actions(1094);
	v->a[32912] = 1;
	v->a[32913] = sym_comment;
	v->a[32914] = actions(1092);
	v->a[32915] = 2;
	v->a[32916] = anon_sym_PLUS_PLUS2;
	v->a[32917] = anon_sym_DASH_DASH2;
	v->a[32918] = actions(1245);
	v->a[32919] = 13;
	small_parse_table_1646(v);
}

void	small_parse_table_1646(t_small_parse_table_array *v)
{
	v->a[32920] = anon_sym_PIPE;
	v->a[32921] = anon_sym_EQ;
	v->a[32922] = anon_sym_LT;
	v->a[32923] = anon_sym_GT;
	v->a[32924] = anon_sym_GT_GT;
	v->a[32925] = anon_sym_LT_LT;
	v->a[32926] = anon_sym_CARET;
	v->a[32927] = anon_sym_AMP;
	v->a[32928] = anon_sym_PLUS;
	v->a[32929] = anon_sym_DASH;
	v->a[32930] = anon_sym_STAR;
	v->a[32931] = anon_sym_SLASH;
	v->a[32932] = anon_sym_PERCENT;
	v->a[32933] = actions(1247);
	v->a[32934] = 19;
	v->a[32935] = anon_sym_AMP_AMP;
	v->a[32936] = anon_sym_PIPE_PIPE;
	v->a[32937] = anon_sym_RPAREN_RPAREN;
	v->a[32938] = anon_sym_PLUS_EQ;
	v->a[32939] = anon_sym_DASH_EQ;
	small_parse_table_1647(v);
}

void	small_parse_table_1647(t_small_parse_table_array *v)
{
	v->a[32940] = anon_sym_STAR_EQ;
	v->a[32941] = anon_sym_SLASH_EQ;
	v->a[32942] = anon_sym_PERCENT_EQ;
	v->a[32943] = anon_sym_LT_LT_EQ;
	v->a[32944] = anon_sym_GT_GT_EQ;
	v->a[32945] = anon_sym_AMP_EQ;
	v->a[32946] = anon_sym_CARET_EQ;
	v->a[32947] = anon_sym_PIPE_EQ;
	v->a[32948] = anon_sym_EQ_EQ;
	v->a[32949] = anon_sym_BANG_EQ;
	v->a[32950] = anon_sym_LT_EQ;
	v->a[32951] = anon_sym_GT_EQ;
	v->a[32952] = anon_sym_QMARK;
	v->a[32953] = anon_sym_COLON;
	v->a[32954] = 3;
	v->a[32955] = actions(3);
	v->a[32956] = 1;
	v->a[32957] = sym_comment;
	v->a[32958] = actions(1124);
	v->a[32959] = 3;
	small_parse_table_1648(v);
}

void	small_parse_table_1648(t_small_parse_table_array *v)
{
	v->a[32960] = sym_file_descriptor;
	v->a[32961] = sym__concat;
	v->a[32962] = sym__bare_dollar;
	v->a[32963] = actions(1122);
	v->a[32964] = 31;
	v->a[32965] = anon_sym_esac;
	v->a[32966] = anon_sym_LPAREN;
	v->a[32967] = anon_sym_PIPE;
	v->a[32968] = anon_sym_SEMI_SEMI;
	v->a[32969] = anon_sym_AMP_AMP;
	v->a[32970] = anon_sym_PIPE_PIPE;
	v->a[32971] = anon_sym_LT;
	v->a[32972] = anon_sym_GT;
	v->a[32973] = anon_sym_GT_GT;
	v->a[32974] = anon_sym_AMP_GT;
	v->a[32975] = anon_sym_AMP_GT_GT;
	v->a[32976] = anon_sym_LT_AMP;
	v->a[32977] = anon_sym_GT_AMP;
	v->a[32978] = anon_sym_GT_PIPE;
	v->a[32979] = anon_sym_LT_AMP_DASH;
	small_parse_table_1649(v);
}

void	small_parse_table_1649(t_small_parse_table_array *v)
{
	v->a[32980] = anon_sym_GT_AMP_DASH;
	v->a[32981] = anon_sym_LT_LT;
	v->a[32982] = anon_sym_LT_LT_DASH;
	v->a[32983] = aux_sym_heredoc_redirect_token1;
	v->a[32984] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[32985] = anon_sym_AMP;
	v->a[32986] = aux_sym_concatenation_token1;
	v->a[32987] = anon_sym_DOLLAR;
	v->a[32988] = anon_sym_DQUOTE;
	v->a[32989] = sym_raw_string;
	v->a[32990] = sym_number;
	v->a[32991] = anon_sym_DOLLAR_LBRACE;
	v->a[32992] = anon_sym_DOLLAR_LPAREN;
	v->a[32993] = anon_sym_BQUOTE;
	v->a[32994] = sym_word;
	v->a[32995] = anon_sym_SEMI;
	v->a[32996] = 6;
	v->a[32997] = actions(3);
	v->a[32998] = 1;
	v->a[32999] = sym_comment;
	small_parse_table_1650(v);
}

/* EOF small_parse_table_329.c */
