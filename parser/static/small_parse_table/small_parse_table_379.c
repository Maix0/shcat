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
	v->a[37900] = 1;
	v->a[37901] = anon_sym_RPAREN_RPAREN;
	v->a[37902] = actions(1082);
	v->a[37903] = 2;
	v->a[37904] = anon_sym_LT;
	v->a[37905] = anon_sym_GT;
	v->a[37906] = actions(1084);
	v->a[37907] = 2;
	v->a[37908] = anon_sym_GT_GT;
	v->a[37909] = anon_sym_LT_LT;
	v->a[37910] = actions(1086);
	v->a[37911] = 2;
	v->a[37912] = anon_sym_LT_EQ;
	v->a[37913] = anon_sym_GT_EQ;
	v->a[37914] = actions(1088);
	v->a[37915] = 2;
	v->a[37916] = anon_sym_PLUS;
	v->a[37917] = anon_sym_DASH;
	v->a[37918] = actions(1092);
	v->a[37919] = 2;
	small_parse_table_1896(v);
}

void	small_parse_table_1896(t_small_parse_table_array *v)
{
	v->a[37920] = anon_sym_PLUS_PLUS2;
	v->a[37921] = anon_sym_DASH_DASH2;
	v->a[37922] = actions(1116);
	v->a[37923] = 2;
	v->a[37924] = anon_sym_EQ_EQ;
	v->a[37925] = anon_sym_BANG_EQ;
	v->a[37926] = actions(1090);
	v->a[37927] = 3;
	v->a[37928] = anon_sym_STAR;
	v->a[37929] = anon_sym_SLASH;
	v->a[37930] = anon_sym_PERCENT;
	v->a[37931] = actions(1288);
	v->a[37932] = 10;
	v->a[37933] = anon_sym_PLUS_EQ;
	v->a[37934] = anon_sym_DASH_EQ;
	v->a[37935] = anon_sym_STAR_EQ;
	v->a[37936] = anon_sym_SLASH_EQ;
	v->a[37937] = anon_sym_PERCENT_EQ;
	v->a[37938] = anon_sym_LT_LT_EQ;
	v->a[37939] = anon_sym_GT_GT_EQ;
	small_parse_table_1897(v);
}

void	small_parse_table_1897(t_small_parse_table_array *v)
{
	v->a[37940] = anon_sym_AMP_EQ;
	v->a[37941] = anon_sym_CARET_EQ;
	v->a[37942] = anon_sym_PIPE_EQ;
	v->a[37943] = 6;
	v->a[37944] = actions(3);
	v->a[37945] = 1;
	v->a[37946] = sym_comment;
	v->a[37947] = actions(379);
	v->a[37948] = 1;
	v->a[37949] = sym_file_descriptor;
	v->a[37950] = actions(1431);
	v->a[37951] = 1;
	v->a[37952] = sym_variable_name;
	v->a[37953] = actions(1429);
	v->a[37954] = 2;
	v->a[37955] = aux_sym__simple_variable_name_token1;
	v->a[37956] = aux_sym__multiline_variable_name_token1;
	v->a[37957] = actions(1427);
	v->a[37958] = 9;
	v->a[37959] = anon_sym_BANG;
	small_parse_table_1898(v);
}

void	small_parse_table_1898(t_small_parse_table_array *v)
{
	v->a[37960] = anon_sym_DASH;
	v->a[37961] = anon_sym_STAR;
	v->a[37962] = anon_sym_QMARK;
	v->a[37963] = anon_sym_DOLLAR;
	v->a[37964] = anon_sym_POUND;
	v->a[37965] = anon_sym_AT;
	v->a[37966] = anon_sym_0;
	v->a[37967] = anon_sym__;
	v->a[37968] = actions(381);
	v->a[37969] = 20;
	v->a[37970] = anon_sym_PIPE;
	v->a[37971] = anon_sym_SEMI_SEMI;
	v->a[37972] = anon_sym_AMP_AMP;
	v->a[37973] = anon_sym_PIPE_PIPE;
	v->a[37974] = anon_sym_LT;
	v->a[37975] = anon_sym_GT;
	v->a[37976] = anon_sym_GT_GT;
	v->a[37977] = anon_sym_AMP_GT;
	v->a[37978] = anon_sym_AMP_GT_GT;
	v->a[37979] = anon_sym_LT_AMP;
	small_parse_table_1899(v);
}

void	small_parse_table_1899(t_small_parse_table_array *v)
{
	v->a[37980] = anon_sym_GT_AMP;
	v->a[37981] = anon_sym_GT_PIPE;
	v->a[37982] = anon_sym_LT_AMP_DASH;
	v->a[37983] = anon_sym_GT_AMP_DASH;
	v->a[37984] = anon_sym_LT_LT;
	v->a[37985] = anon_sym_LT_LT_DASH;
	v->a[37986] = aux_sym_heredoc_redirect_token1;
	v->a[37987] = anon_sym_AMP;
	v->a[37988] = anon_sym_BQUOTE;
	v->a[37989] = anon_sym_SEMI;
	v->a[37990] = 3;
	v->a[37991] = actions(3);
	v->a[37992] = 1;
	v->a[37993] = sym_comment;
	v->a[37994] = actions(1076);
	v->a[37995] = 3;
	v->a[37996] = sym_file_descriptor;
	v->a[37997] = sym__concat;
	v->a[37998] = sym_variable_name;
	v->a[37999] = actions(1074);
	small_parse_table_1900(v);
}

/* EOF small_parse_table_379.c */
