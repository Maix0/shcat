/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_109.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_545(t_small_parse_table_array *v)
{
	v->a[10900] = anon_sym_GT_PIPE;
	v->a[10901] = anon_sym_LT_AMP_DASH;
	v->a[10902] = anon_sym_GT_AMP_DASH;
	v->a[10903] = anon_sym_LT_LT;
	v->a[10904] = anon_sym_LT_LT_DASH;
	v->a[10905] = anon_sym_AMP;
	v->a[10906] = anon_sym_SEMI;
	v->a[10907] = 20;
	v->a[10908] = actions(3);
	v->a[10909] = 1;
	v->a[10910] = sym_comment;
	v->a[10911] = actions(1737);
	v->a[10912] = 1;
	v->a[10913] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[10914] = actions(1739);
	v->a[10915] = 1;
	v->a[10916] = anon_sym_DOLLAR;
	v->a[10917] = actions(1743);
	v->a[10918] = 1;
	v->a[10919] = anon_sym_DQUOTE;
	small_parse_table_546(v);
}

void	small_parse_table_546(t_small_parse_table_array *v)
{
	v->a[10920] = actions(1745);
	v->a[10921] = 1;
	v->a[10922] = aux_sym_number_token1;
	v->a[10923] = actions(1747);
	v->a[10924] = 1;
	v->a[10925] = aux_sym_number_token2;
	v->a[10926] = actions(1749);
	v->a[10927] = 1;
	v->a[10928] = anon_sym_DOLLAR_LBRACE;
	v->a[10929] = actions(1751);
	v->a[10930] = 1;
	v->a[10931] = anon_sym_DOLLAR_LPAREN;
	v->a[10932] = actions(1753);
	v->a[10933] = 1;
	v->a[10934] = anon_sym_BQUOTE;
	v->a[10935] = actions(1755);
	v->a[10936] = 1;
	v->a[10937] = anon_sym_DOLLAR_BQUOTE;
	v->a[10938] = actions(1761);
	v->a[10939] = 1;
	small_parse_table_547(v);
}

void	small_parse_table_547(t_small_parse_table_array *v)
{
	v->a[10940] = sym__brace_start;
	v->a[10941] = actions(2286);
	v->a[10942] = 1;
	v->a[10943] = sym__special_character;
	v->a[10944] = actions(2288);
	v->a[10945] = 1;
	v->a[10946] = aux_sym__simple_variable_name_token1;
	v->a[10947] = actions(2290);
	v->a[10948] = 1;
	v->a[10949] = sym_test_operator;
	v->a[10950] = state(1219);
	v->a[10951] = 1;
	v->a[10952] = aux_sym__literal_repeat1;
	v->a[10953] = actions(1041);
	v->a[10954] = 2;
	v->a[10955] = sym_file_descriptor;
	v->a[10956] = aux_sym_heredoc_redirect_token1;
	v->a[10957] = actions(2284);
	v->a[10958] = 2;
	v->a[10959] = sym_raw_string;
	small_parse_table_548(v);
}

void	small_parse_table_548(t_small_parse_table_array *v)
{
	v->a[10960] = sym_word;
	v->a[10961] = state(412);
	v->a[10962] = 2;
	v->a[10963] = sym_concatenation;
	v->a[10964] = aux_sym_unset_command_repeat1;
	v->a[10965] = state(1088);
	v->a[10966] = 7;
	v->a[10967] = sym_arithmetic_expansion;
	v->a[10968] = sym_brace_expression;
	v->a[10969] = sym_string;
	v->a[10970] = sym_number;
	v->a[10971] = sym_simple_expansion;
	v->a[10972] = sym_expansion;
	v->a[10973] = sym_command_substitution;
	v->a[10974] = actions(1039);
	v->a[10975] = 19;
	v->a[10976] = anon_sym_PIPE;
	v->a[10977] = anon_sym_SEMI_SEMI;
	v->a[10978] = anon_sym_PIPE_AMP;
	v->a[10979] = anon_sym_AMP_AMP;
	small_parse_table_549(v);
}

void	small_parse_table_549(t_small_parse_table_array *v)
{
	v->a[10980] = anon_sym_PIPE_PIPE;
	v->a[10981] = anon_sym_LT;
	v->a[10982] = anon_sym_GT;
	v->a[10983] = anon_sym_GT_GT;
	v->a[10984] = anon_sym_AMP_GT;
	v->a[10985] = anon_sym_AMP_GT_GT;
	v->a[10986] = anon_sym_LT_AMP;
	v->a[10987] = anon_sym_GT_AMP;
	v->a[10988] = anon_sym_GT_PIPE;
	v->a[10989] = anon_sym_LT_AMP_DASH;
	v->a[10990] = anon_sym_GT_AMP_DASH;
	v->a[10991] = anon_sym_LT_LT;
	v->a[10992] = anon_sym_LT_LT_DASH;
	v->a[10993] = anon_sym_AMP;
	v->a[10994] = anon_sym_SEMI;
	v->a[10995] = 21;
	v->a[10996] = actions(3);
	v->a[10997] = 1;
	v->a[10998] = sym_comment;
	v->a[10999] = actions(1252);
	small_parse_table_550(v);
}

/* EOF small_parse_table_109.c */
