/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_379.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1895(t_small_parse_table_array *v)
{
	v->a[37900] = anon_sym_LT;
	v->a[37901] = anon_sym_GT;
	v->a[37902] = anon_sym_GT_GT;
	v->a[37903] = anon_sym_AMP_GT;
	v->a[37904] = anon_sym_AMP_GT_GT;
	v->a[37905] = anon_sym_LT_AMP;
	v->a[37906] = anon_sym_GT_AMP;
	v->a[37907] = anon_sym_GT_PIPE;
	v->a[37908] = anon_sym_LT_AMP_DASH;
	v->a[37909] = anon_sym_GT_AMP_DASH;
	v->a[37910] = anon_sym_LT_LT;
	v->a[37911] = anon_sym_LT_LT_DASH;
	v->a[37912] = aux_sym_heredoc_redirect_token1;
	v->a[37913] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[37914] = anon_sym_AMP;
	v->a[37915] = anon_sym_DOLLAR;
	v->a[37916] = anon_sym_DQUOTE;
	v->a[37917] = sym_raw_string;
	v->a[37918] = sym_number;
	v->a[37919] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1896(v);
}

void	small_parse_table_1896(t_small_parse_table_array *v)
{
	v->a[37920] = anon_sym_DOLLAR_LPAREN;
	v->a[37921] = anon_sym_BQUOTE;
	v->a[37922] = sym_word;
	v->a[37923] = anon_sym_SEMI;
	v->a[37924] = 17;
	v->a[37925] = actions(1074);
	v->a[37926] = 1;
	v->a[37927] = sym_comment;
	v->a[37928] = actions(1136);
	v->a[37929] = 1;
	v->a[37930] = anon_sym_PIPE;
	v->a[37931] = actions(1138);
	v->a[37932] = 1;
	v->a[37933] = anon_sym_AMP_AMP;
	v->a[37934] = actions(1140);
	v->a[37935] = 1;
	v->a[37936] = anon_sym_PIPE_PIPE;
	v->a[37937] = actions(1150);
	v->a[37938] = 1;
	v->a[37939] = anon_sym_CARET;
	small_parse_table_1897(v);
}

void	small_parse_table_1897(t_small_parse_table_array *v)
{
	v->a[37940] = actions(1152);
	v->a[37941] = 1;
	v->a[37942] = anon_sym_AMP;
	v->a[37943] = actions(1239);
	v->a[37944] = 1;
	v->a[37945] = anon_sym_EQ;
	v->a[37946] = actions(1241);
	v->a[37947] = 1;
	v->a[37948] = anon_sym_QMARK;
	v->a[37949] = actions(1388);
	v->a[37950] = 1;
	v->a[37951] = anon_sym_RPAREN_RPAREN;
	v->a[37952] = actions(1144);
	v->a[37953] = 2;
	v->a[37954] = anon_sym_LT;
	v->a[37955] = anon_sym_GT;
	v->a[37956] = actions(1146);
	v->a[37957] = 2;
	v->a[37958] = anon_sym_GT_GT;
	v->a[37959] = anon_sym_LT_LT;
	small_parse_table_1898(v);
}

void	small_parse_table_1898(t_small_parse_table_array *v)
{
	v->a[37960] = actions(1154);
	v->a[37961] = 2;
	v->a[37962] = anon_sym_EQ_EQ;
	v->a[37963] = anon_sym_BANG_EQ;
	v->a[37964] = actions(1156);
	v->a[37965] = 2;
	v->a[37966] = anon_sym_LT_EQ;
	v->a[37967] = anon_sym_GT_EQ;
	v->a[37968] = actions(1158);
	v->a[37969] = 2;
	v->a[37970] = anon_sym_PLUS;
	v->a[37971] = anon_sym_DASH;
	v->a[37972] = actions(1162);
	v->a[37973] = 2;
	v->a[37974] = anon_sym_PLUS_PLUS2;
	v->a[37975] = anon_sym_DASH_DASH2;
	v->a[37976] = actions(1160);
	v->a[37977] = 3;
	v->a[37978] = anon_sym_STAR;
	v->a[37979] = anon_sym_SLASH;
	small_parse_table_1899(v);
}

void	small_parse_table_1899(t_small_parse_table_array *v)
{
	v->a[37980] = anon_sym_PERCENT;
	v->a[37981] = actions(1252);
	v->a[37982] = 10;
	v->a[37983] = anon_sym_PLUS_EQ;
	v->a[37984] = anon_sym_DASH_EQ;
	v->a[37985] = anon_sym_STAR_EQ;
	v->a[37986] = anon_sym_SLASH_EQ;
	v->a[37987] = anon_sym_PERCENT_EQ;
	v->a[37988] = anon_sym_LT_LT_EQ;
	v->a[37989] = anon_sym_GT_GT_EQ;
	v->a[37990] = anon_sym_AMP_EQ;
	v->a[37991] = anon_sym_CARET_EQ;
	v->a[37992] = anon_sym_PIPE_EQ;
	v->a[37993] = 17;
	v->a[37994] = actions(1074);
	v->a[37995] = 1;
	v->a[37996] = sym_comment;
	v->a[37997] = actions(1136);
	v->a[37998] = 1;
	v->a[37999] = anon_sym_PIPE;
	small_parse_table_1900(v);
}

/* EOF small_parse_table_379.c */
