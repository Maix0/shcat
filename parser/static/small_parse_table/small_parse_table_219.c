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
	v->a[21900] = actions(669);
	v->a[21901] = 2;
	v->a[21902] = sym_test_operator;
	v->a[21903] = sym_raw_string;
	v->a[21904] = actions(2896);
	v->a[21905] = 2;
	v->a[21906] = anon_sym_LT_AMP_DASH;
	v->a[21907] = anon_sym_GT_AMP_DASH;
	v->a[21908] = actions(2894);
	v->a[21909] = 3;
	v->a[21910] = anon_sym_GT_GT;
	v->a[21911] = anon_sym_AMP_GT_GT;
	v->a[21912] = anon_sym_GT_PIPE;
	v->a[21913] = actions(2892);
	v->a[21914] = 5;
	v->a[21915] = anon_sym_LT;
	v->a[21916] = anon_sym_GT;
	v->a[21917] = anon_sym_AMP_GT;
	v->a[21918] = anon_sym_LT_AMP;
	v->a[21919] = anon_sym_GT_AMP;
	small_parse_table_1096(v);
}

void	small_parse_table_1096(t_small_parse_table_array *v)
{
	v->a[21920] = state(1341);
	v->a[21921] = 7;
	v->a[21922] = sym_arithmetic_expansion;
	v->a[21923] = sym_brace_expression;
	v->a[21924] = sym_string;
	v->a[21925] = sym_number;
	v->a[21926] = sym_simple_expansion;
	v->a[21927] = sym_expansion;
	v->a[21928] = sym_command_substitution;
	v->a[21929] = 3;
	v->a[21930] = actions(3);
	v->a[21931] = 1;
	v->a[21932] = sym_comment;
	v->a[21933] = actions(3050);
	v->a[21934] = 6;
	v->a[21935] = sym_file_descriptor;
	v->a[21936] = sym__concat;
	v->a[21937] = sym_variable_name;
	v->a[21938] = sym_test_operator;
	v->a[21939] = sym__brace_start;
	small_parse_table_1097(v);
}

void	small_parse_table_1097(t_small_parse_table_array *v)
{
	v->a[21940] = aux_sym_heredoc_redirect_token1;
	v->a[21941] = actions(3048);
	v->a[21942] = 36;
	v->a[21943] = anon_sym_esac;
	v->a[21944] = anon_sym_PIPE;
	v->a[21945] = anon_sym_SEMI_SEMI;
	v->a[21946] = anon_sym_SEMI_AMP;
	v->a[21947] = anon_sym_SEMI_SEMI_AMP;
	v->a[21948] = anon_sym_PIPE_AMP;
	v->a[21949] = anon_sym_AMP_AMP;
	v->a[21950] = anon_sym_PIPE_PIPE;
	v->a[21951] = anon_sym_LT;
	v->a[21952] = anon_sym_GT;
	v->a[21953] = anon_sym_GT_GT;
	v->a[21954] = anon_sym_AMP_GT;
	v->a[21955] = anon_sym_AMP_GT_GT;
	v->a[21956] = anon_sym_LT_AMP;
	v->a[21957] = anon_sym_GT_AMP;
	v->a[21958] = anon_sym_GT_PIPE;
	v->a[21959] = anon_sym_LT_AMP_DASH;
	small_parse_table_1098(v);
}

void	small_parse_table_1098(t_small_parse_table_array *v)
{
	v->a[21960] = anon_sym_GT_AMP_DASH;
	v->a[21961] = anon_sym_LT_LT;
	v->a[21962] = anon_sym_LT_LT_DASH;
	v->a[21963] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[21964] = anon_sym_AMP;
	v->a[21965] = aux_sym_concatenation_token1;
	v->a[21966] = anon_sym_DOLLAR;
	v->a[21967] = sym__special_character;
	v->a[21968] = anon_sym_DQUOTE;
	v->a[21969] = sym_raw_string;
	v->a[21970] = aux_sym_number_token1;
	v->a[21971] = aux_sym_number_token2;
	v->a[21972] = anon_sym_DOLLAR_LBRACE;
	v->a[21973] = anon_sym_DOLLAR_LPAREN;
	v->a[21974] = anon_sym_BQUOTE;
	v->a[21975] = anon_sym_DOLLAR_BQUOTE;
	v->a[21976] = aux_sym__simple_variable_name_token1;
	v->a[21977] = sym_word;
	v->a[21978] = anon_sym_SEMI;
	v->a[21979] = 29;
	small_parse_table_1099(v);
}

void	small_parse_table_1099(t_small_parse_table_array *v)
{
	v->a[21980] = actions(17);
	v->a[21981] = 1;
	v->a[21982] = anon_sym_LPAREN;
	v->a[21983] = actions(57);
	v->a[21984] = 1;
	v->a[21985] = sym_comment;
	v->a[21986] = actions(87);
	v->a[21987] = 1;
	v->a[21988] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[21989] = actions(89);
	v->a[21990] = 1;
	v->a[21991] = anon_sym_DOLLAR;
	v->a[21992] = actions(93);
	v->a[21993] = 1;
	v->a[21994] = anon_sym_DQUOTE;
	v->a[21995] = actions(97);
	v->a[21996] = 1;
	v->a[21997] = aux_sym_number_token1;
	v->a[21998] = actions(99);
	v->a[21999] = 1;
	small_parse_table_1100(v);
}

/* EOF small_parse_table_219.c */
