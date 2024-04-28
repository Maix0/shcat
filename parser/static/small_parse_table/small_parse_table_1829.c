/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1829.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9145(t_small_parse_table_array *v)
{
	v->a[182900] = anon_sym_LPAREN_LPAREN;
	v->a[182901] = anon_sym_PIPE_PIPE;
	v->a[182902] = anon_sym_AMP_AMP;
	v->a[182903] = anon_sym_LT;
	v->a[182904] = anon_sym_GT;
	v->a[182905] = anon_sym_GT_GT;
	v->a[182906] = anon_sym_AMP_GT;
	v->a[182907] = anon_sym_AMP_GT_GT;
	v->a[182908] = anon_sym_LT_AMP;
	v->a[182909] = anon_sym_GT_AMP;
	v->a[182910] = anon_sym_GT_PIPE;
	v->a[182911] = anon_sym_LT_AMP_DASH;
	v->a[182912] = anon_sym_GT_AMP_DASH;
	v->a[182913] = anon_sym_LT_LT_LT;
	v->a[182914] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[182915] = anon_sym_DOLLAR_LBRACK;
	v->a[182916] = aux_sym_concatenation_token1;
	v->a[182917] = anon_sym_DOLLAR;
	v->a[182918] = sym__special_character;
	v->a[182919] = anon_sym_DQUOTE;
	small_parse_table_9146(v);
}

void	small_parse_table_9146(t_small_parse_table_array *v)
{
	v->a[182920] = sym_raw_string;
	v->a[182921] = sym_ansi_c_string;
	v->a[182922] = aux_sym_number_token1;
	v->a[182923] = aux_sym_number_token2;
	v->a[182924] = anon_sym_DOLLAR_LBRACE;
	v->a[182925] = anon_sym_DOLLAR_LPAREN;
	v->a[182926] = anon_sym_BQUOTE;
	v->a[182927] = anon_sym_DOLLAR_BQUOTE;
	v->a[182928] = anon_sym_LT_LPAREN;
	v->a[182929] = anon_sym_GT_LPAREN;
	v->a[182930] = sym_word;
	v->a[182931] = 10;
	v->a[182932] = actions(71);
	v->a[182933] = 1;
	v->a[182934] = sym_comment;
	v->a[182935] = actions(7719);
	v->a[182936] = 1;
	v->a[182937] = anon_sym_STAR_STAR;
	v->a[182938] = actions(7717);
	v->a[182939] = 2;
	small_parse_table_9147(v);
}

void	small_parse_table_9147(t_small_parse_table_array *v)
{
	v->a[182940] = anon_sym_PLUS_PLUS;
	v->a[182941] = anon_sym_DASH_DASH;
	v->a[182942] = actions(7723);
	v->a[182943] = 2;
	v->a[182944] = anon_sym_PLUS;
	v->a[182945] = anon_sym_DASH;
	v->a[182946] = actions(7725);
	v->a[182947] = 2;
	v->a[182948] = anon_sym_LT_LT;
	v->a[182949] = anon_sym_GT_GT;
	v->a[182950] = actions(7727);
	v->a[182951] = 2;
	v->a[182952] = anon_sym_LT;
	v->a[182953] = anon_sym_GT;
	v->a[182954] = actions(7729);
	v->a[182955] = 2;
	v->a[182956] = anon_sym_LT_EQ;
	v->a[182957] = anon_sym_GT_EQ;
	v->a[182958] = actions(7248);
	v->a[182959] = 3;
	small_parse_table_9148(v);
}

void	small_parse_table_9148(t_small_parse_table_array *v)
{
	v->a[182960] = anon_sym_PIPE;
	v->a[182961] = anon_sym_CARET;
	v->a[182962] = anon_sym_AMP;
	v->a[182963] = actions(7721);
	v->a[182964] = 3;
	v->a[182965] = anon_sym_STAR;
	v->a[182966] = anon_sym_SLASH;
	v->a[182967] = anon_sym_PERCENT;
	v->a[182968] = actions(7274);
	v->a[182969] = 19;
	v->a[182970] = anon_sym_COMMA;
	v->a[182971] = anon_sym_PLUS_EQ;
	v->a[182972] = anon_sym_DASH_EQ;
	v->a[182973] = anon_sym_STAR_EQ;
	v->a[182974] = anon_sym_SLASH_EQ;
	v->a[182975] = anon_sym_PERCENT_EQ;
	v->a[182976] = anon_sym_STAR_STAR_EQ;
	v->a[182977] = anon_sym_LT_LT_EQ;
	v->a[182978] = anon_sym_GT_GT_EQ;
	v->a[182979] = anon_sym_AMP_EQ;
	small_parse_table_9149(v);
}

void	small_parse_table_9149(t_small_parse_table_array *v)
{
	v->a[182980] = anon_sym_CARET_EQ;
	v->a[182981] = anon_sym_PIPE_EQ;
	v->a[182982] = anon_sym_PIPE_PIPE;
	v->a[182983] = anon_sym_DASHo;
	v->a[182984] = anon_sym_AMP_AMP;
	v->a[182985] = anon_sym_DASHa;
	v->a[182986] = anon_sym_EQ_EQ;
	v->a[182987] = anon_sym_BANG_EQ;
	v->a[182988] = anon_sym_RPAREN;
	v->a[182989] = 11;
	v->a[182990] = actions(71);
	v->a[182991] = 1;
	v->a[182992] = sym_comment;
	v->a[182993] = actions(7719);
	v->a[182994] = 1;
	v->a[182995] = anon_sym_STAR_STAR;
	v->a[182996] = actions(7717);
	v->a[182997] = 2;
	v->a[182998] = anon_sym_PLUS_PLUS;
	v->a[182999] = anon_sym_DASH_DASH;
	small_parse_table_9150(v);
}

/* EOF small_parse_table_1829.c */
