/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_69.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_345(t_small_parse_table_array *v)
{
	v->a[6900] = anon_sym_GT_AMP;
	v->a[6901] = anon_sym_DOLLAR;
	v->a[6902] = sym__special_character;
	v->a[6903] = aux_sym_number_token1;
	v->a[6904] = aux_sym_number_token2;
	v->a[6905] = anon_sym_DOLLAR_LPAREN;
	v->a[6906] = sym_word;
	v->a[6907] = 21;
	v->a[6908] = actions(3);
	v->a[6909] = 1;
	v->a[6910] = sym_comment;
	v->a[6911] = actions(1252);
	v->a[6912] = 1;
	v->a[6913] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[6914] = actions(1254);
	v->a[6915] = 1;
	v->a[6916] = anon_sym_DOLLAR;
	v->a[6917] = actions(1256);
	v->a[6918] = 1;
	v->a[6919] = sym__special_character;
	small_parse_table_346(v);
}

void	small_parse_table_346(t_small_parse_table_array *v)
{
	v->a[6920] = actions(1258);
	v->a[6921] = 1;
	v->a[6922] = anon_sym_DQUOTE;
	v->a[6923] = actions(1260);
	v->a[6924] = 1;
	v->a[6925] = aux_sym_number_token1;
	v->a[6926] = actions(1262);
	v->a[6927] = 1;
	v->a[6928] = aux_sym_number_token2;
	v->a[6929] = actions(1264);
	v->a[6930] = 1;
	v->a[6931] = anon_sym_DOLLAR_LBRACE;
	v->a[6932] = actions(1266);
	v->a[6933] = 1;
	v->a[6934] = anon_sym_DOLLAR_LPAREN;
	v->a[6935] = actions(1268);
	v->a[6936] = 1;
	v->a[6937] = anon_sym_BQUOTE;
	v->a[6938] = actions(1270);
	v->a[6939] = 1;
	small_parse_table_347(v);
}

void	small_parse_table_347(t_small_parse_table_array *v)
{
	v->a[6940] = anon_sym_DOLLAR_BQUOTE;
	v->a[6941] = actions(1272);
	v->a[6942] = 1;
	v->a[6943] = sym_test_operator;
	v->a[6944] = actions(1274);
	v->a[6945] = 1;
	v->a[6946] = sym__bare_dollar;
	v->a[6947] = actions(1276);
	v->a[6948] = 1;
	v->a[6949] = sym__brace_start;
	v->a[6950] = state(390);
	v->a[6951] = 1;
	v->a[6952] = aux_sym_command_repeat2;
	v->a[6953] = state(1232);
	v->a[6954] = 1;
	v->a[6955] = aux_sym__literal_repeat1;
	v->a[6956] = state(1293);
	v->a[6957] = 1;
	v->a[6958] = sym_concatenation;
	v->a[6959] = actions(1250);
	small_parse_table_348(v);
}

void	small_parse_table_348(t_small_parse_table_array *v)
{
	v->a[6960] = 2;
	v->a[6961] = sym_raw_string;
	v->a[6962] = sym_word;
	v->a[6963] = actions(1280);
	v->a[6964] = 2;
	v->a[6965] = sym_file_descriptor;
	v->a[6966] = aux_sym_heredoc_redirect_token1;
	v->a[6967] = state(770);
	v->a[6968] = 7;
	v->a[6969] = sym_arithmetic_expansion;
	v->a[6970] = sym_brace_expression;
	v->a[6971] = sym_string;
	v->a[6972] = sym_number;
	v->a[6973] = sym_simple_expansion;
	v->a[6974] = sym_expansion;
	v->a[6975] = sym_command_substitution;
	v->a[6976] = actions(1278);
	v->a[6977] = 20;
	v->a[6978] = anon_sym_PIPE;
	v->a[6979] = anon_sym_RPAREN;
	small_parse_table_349(v);
}

void	small_parse_table_349(t_small_parse_table_array *v)
{
	v->a[6980] = anon_sym_SEMI_SEMI;
	v->a[6981] = anon_sym_PIPE_AMP;
	v->a[6982] = anon_sym_AMP_AMP;
	v->a[6983] = anon_sym_PIPE_PIPE;
	v->a[6984] = anon_sym_LT;
	v->a[6985] = anon_sym_GT;
	v->a[6986] = anon_sym_GT_GT;
	v->a[6987] = anon_sym_AMP_GT;
	v->a[6988] = anon_sym_AMP_GT_GT;
	v->a[6989] = anon_sym_LT_AMP;
	v->a[6990] = anon_sym_GT_AMP;
	v->a[6991] = anon_sym_GT_PIPE;
	v->a[6992] = anon_sym_LT_AMP_DASH;
	v->a[6993] = anon_sym_GT_AMP_DASH;
	v->a[6994] = anon_sym_LT_LT;
	v->a[6995] = anon_sym_LT_LT_DASH;
	v->a[6996] = anon_sym_AMP;
	v->a[6997] = anon_sym_SEMI;
	v->a[6998] = 19;
	v->a[6999] = actions(3);
	small_parse_table_350(v);
}

/* EOF small_parse_table_69.c */
