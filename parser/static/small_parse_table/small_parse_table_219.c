/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_219.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1095(t_small_parse_table_array *v)
{
	v->a[21900] = state(731);
	v->a[21901] = 1;
	v->a[21902] = sym_concatenation;
	v->a[21903] = actions(543);
	v->a[21904] = 2;
	v->a[21905] = sym_file_descriptor;
	v->a[21906] = ts_builtin_sym_end;
	v->a[21907] = actions(475);
	v->a[21908] = 3;
	v->a[21909] = sym_raw_string;
	v->a[21910] = sym_number;
	v->a[21911] = sym_word;
	v->a[21912] = state(476);
	v->a[21913] = 5;
	v->a[21914] = sym_arithmetic_expansion;
	v->a[21915] = sym_string;
	v->a[21916] = sym_simple_expansion;
	v->a[21917] = sym_expansion;
	v->a[21918] = sym_command_substitution;
	v->a[21919] = actions(541);
	small_parse_table_1096(v);
}

void	small_parse_table_1096(t_small_parse_table_array *v)
{
	v->a[21920] = 17;
	v->a[21921] = anon_sym_PIPE;
	v->a[21922] = anon_sym_SEMI_SEMI;
	v->a[21923] = anon_sym_AMP_AMP;
	v->a[21924] = anon_sym_PIPE_PIPE;
	v->a[21925] = anon_sym_LT;
	v->a[21926] = anon_sym_GT;
	v->a[21927] = anon_sym_GT_GT;
	v->a[21928] = anon_sym_LT_AMP;
	v->a[21929] = anon_sym_GT_AMP;
	v->a[21930] = anon_sym_GT_PIPE;
	v->a[21931] = anon_sym_LT_AMP_DASH;
	v->a[21932] = anon_sym_GT_AMP_DASH;
	v->a[21933] = anon_sym_LT_LT;
	v->a[21934] = anon_sym_LT_LT_DASH;
	v->a[21935] = aux_sym_heredoc_redirect_token1;
	v->a[21936] = anon_sym_AMP;
	v->a[21937] = anon_sym_SEMI;
	v->a[21938] = 14;
	v->a[21939] = actions(3);
	small_parse_table_1097(v);
}

void	small_parse_table_1097(t_small_parse_table_array *v)
{
	v->a[21940] = 1;
	v->a[21941] = sym_comment;
	v->a[21942] = actions(497);
	v->a[21943] = 1;
	v->a[21944] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[21945] = actions(499);
	v->a[21946] = 1;
	v->a[21947] = anon_sym_DOLLAR;
	v->a[21948] = actions(501);
	v->a[21949] = 1;
	v->a[21950] = anon_sym_DQUOTE;
	v->a[21951] = actions(503);
	v->a[21952] = 1;
	v->a[21953] = anon_sym_DOLLAR_LBRACE;
	v->a[21954] = actions(505);
	v->a[21955] = 1;
	v->a[21956] = anon_sym_DOLLAR_LPAREN;
	v->a[21957] = actions(507);
	v->a[21958] = 1;
	v->a[21959] = anon_sym_BQUOTE;
	small_parse_table_1098(v);
}

void	small_parse_table_1098(t_small_parse_table_array *v)
{
	v->a[21960] = actions(509);
	v->a[21961] = 1;
	v->a[21962] = sym__bare_dollar;
	v->a[21963] = actions(571);
	v->a[21964] = 1;
	v->a[21965] = sym_file_descriptor;
	v->a[21966] = state(192);
	v->a[21967] = 1;
	v->a[21968] = aux_sym_command_repeat2;
	v->a[21969] = state(725);
	v->a[21970] = 1;
	v->a[21971] = sym_concatenation;
	v->a[21972] = actions(495);
	v->a[21973] = 3;
	v->a[21974] = sym_raw_string;
	v->a[21975] = sym_number;
	v->a[21976] = sym_word;
	v->a[21977] = state(438);
	v->a[21978] = 5;
	v->a[21979] = sym_arithmetic_expansion;
	small_parse_table_1099(v);
}

void	small_parse_table_1099(t_small_parse_table_array *v)
{
	v->a[21980] = sym_string;
	v->a[21981] = sym_simple_expansion;
	v->a[21982] = sym_expansion;
	v->a[21983] = sym_command_substitution;
	v->a[21984] = actions(569);
	v->a[21985] = 18;
	v->a[21986] = anon_sym_esac;
	v->a[21987] = anon_sym_PIPE;
	v->a[21988] = anon_sym_SEMI_SEMI;
	v->a[21989] = anon_sym_AMP_AMP;
	v->a[21990] = anon_sym_PIPE_PIPE;
	v->a[21991] = anon_sym_LT;
	v->a[21992] = anon_sym_GT;
	v->a[21993] = anon_sym_GT_GT;
	v->a[21994] = anon_sym_LT_AMP;
	v->a[21995] = anon_sym_GT_AMP;
	v->a[21996] = anon_sym_GT_PIPE;
	v->a[21997] = anon_sym_LT_AMP_DASH;
	v->a[21998] = anon_sym_GT_AMP_DASH;
	v->a[21999] = anon_sym_LT_LT;
	small_parse_table_1100(v);
}

/* EOF small_parse_table_219.c */
