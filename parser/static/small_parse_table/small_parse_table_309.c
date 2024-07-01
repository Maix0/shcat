/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_309.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1545(t_small_parse_table_array *v)
{
	v->a[30900] = actions(844);
	v->a[30901] = 1;
	v->a[30902] = anon_sym_AMP_AMP;
	v->a[30903] = actions(846);
	v->a[30904] = 1;
	v->a[30905] = anon_sym_PIPE_PIPE;
	v->a[30906] = actions(856);
	v->a[30907] = 1;
	v->a[30908] = anon_sym_CARET;
	v->a[30909] = actions(858);
	v->a[30910] = 1;
	v->a[30911] = anon_sym_AMP;
	v->a[30912] = actions(870);
	v->a[30913] = 1;
	v->a[30914] = sym_comment;
	v->a[30915] = actions(1021);
	v->a[30916] = 1;
	v->a[30917] = anon_sym_EQ;
	v->a[30918] = actions(1023);
	v->a[30919] = 1;
	small_parse_table_1546(v);
}

void	small_parse_table_1546(t_small_parse_table_array *v)
{
	v->a[30920] = anon_sym_QMARK;
	v->a[30921] = actions(1166);
	v->a[30922] = 1;
	v->a[30923] = anon_sym_RPAREN_RPAREN;
	v->a[30924] = actions(850);
	v->a[30925] = 2;
	v->a[30926] = anon_sym_LT;
	v->a[30927] = anon_sym_GT;
	v->a[30928] = actions(852);
	v->a[30929] = 2;
	v->a[30930] = anon_sym_GT_GT;
	v->a[30931] = anon_sym_LT_LT;
	v->a[30932] = actions(860);
	v->a[30933] = 2;
	v->a[30934] = anon_sym_EQ_EQ;
	v->a[30935] = anon_sym_BANG_EQ;
	v->a[30936] = actions(862);
	v->a[30937] = 2;
	v->a[30938] = anon_sym_LT_EQ;
	v->a[30939] = anon_sym_GT_EQ;
	small_parse_table_1547(v);
}

void	small_parse_table_1547(t_small_parse_table_array *v)
{
	v->a[30940] = actions(864);
	v->a[30941] = 2;
	v->a[30942] = anon_sym_PLUS;
	v->a[30943] = anon_sym_DASH;
	v->a[30944] = actions(868);
	v->a[30945] = 2;
	v->a[30946] = anon_sym_PLUS_PLUS2;
	v->a[30947] = anon_sym_DASH_DASH2;
	v->a[30948] = actions(866);
	v->a[30949] = 3;
	v->a[30950] = anon_sym_STAR;
	v->a[30951] = anon_sym_SLASH;
	v->a[30952] = anon_sym_PERCENT;
	v->a[30953] = actions(1079);
	v->a[30954] = 10;
	v->a[30955] = anon_sym_PLUS_EQ;
	v->a[30956] = anon_sym_DASH_EQ;
	v->a[30957] = anon_sym_STAR_EQ;
	v->a[30958] = anon_sym_SLASH_EQ;
	v->a[30959] = anon_sym_PERCENT_EQ;
	small_parse_table_1548(v);
}

void	small_parse_table_1548(t_small_parse_table_array *v)
{
	v->a[30960] = anon_sym_LT_LT_EQ;
	v->a[30961] = anon_sym_GT_GT_EQ;
	v->a[30962] = anon_sym_AMP_EQ;
	v->a[30963] = anon_sym_CARET_EQ;
	v->a[30964] = anon_sym_PIPE_EQ;
	v->a[30965] = 12;
	v->a[30966] = actions(3);
	v->a[30967] = 1;
	v->a[30968] = sym_comment;
	v->a[30969] = actions(790);
	v->a[30970] = 1;
	v->a[30971] = sym_file_descriptor;
	v->a[30972] = actions(910);
	v->a[30973] = 1;
	v->a[30974] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30975] = actions(912);
	v->a[30976] = 1;
	v->a[30977] = anon_sym_DOLLAR;
	v->a[30978] = actions(914);
	v->a[30979] = 1;
	small_parse_table_1549(v);
}

void	small_parse_table_1549(t_small_parse_table_array *v)
{
	v->a[30980] = anon_sym_DQUOTE;
	v->a[30981] = actions(916);
	v->a[30982] = 1;
	v->a[30983] = anon_sym_DOLLAR_LBRACE;
	v->a[30984] = actions(918);
	v->a[30985] = 1;
	v->a[30986] = anon_sym_DOLLAR_LPAREN;
	v->a[30987] = actions(920);
	v->a[30988] = 1;
	v->a[30989] = anon_sym_BQUOTE;
	v->a[30990] = state(1276);
	v->a[30991] = 1;
	v->a[30992] = sym_concatenation;
	v->a[30993] = actions(1168);
	v->a[30994] = 3;
	v->a[30995] = sym_raw_string;
	v->a[30996] = sym_number;
	v->a[30997] = sym_word;
	v->a[30998] = state(1314);
	v->a[30999] = 5;
	small_parse_table_1550(v);
}

/* EOF small_parse_table_309.c */
