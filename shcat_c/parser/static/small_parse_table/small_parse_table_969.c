/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_969.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4845(t_small_parse_table_array *v)
{
	v->a[96900] = sym__concat;
	v->a[96901] = state(2068);
	v->a[96902] = 1;
	v->a[96903] = aux_sym_concatenation_repeat1;
	v->a[96904] = actions(5391);
	v->a[96905] = 4;
	v->a[96906] = sym_file_descriptor;
	v->a[96907] = sym_test_operator;
	v->a[96908] = sym__brace_start;
	v->a[96909] = aux_sym_heredoc_redirect_token1;
	v->a[96910] = actions(5389);
	v->a[96911] = 36;
	v->a[96912] = anon_sym_LPAREN_LPAREN;
	v->a[96913] = anon_sym_SEMI;
	v->a[96914] = anon_sym_PIPE_PIPE;
	v->a[96915] = anon_sym_AMP_AMP;
	v->a[96916] = anon_sym_PIPE;
	v->a[96917] = anon_sym_AMP;
	v->a[96918] = anon_sym_LT;
	v->a[96919] = anon_sym_GT;
	small_parse_table_4846(v);
}

void	small_parse_table_4846(t_small_parse_table_array *v)
{
	v->a[96920] = anon_sym_LT_LT;
	v->a[96921] = anon_sym_GT_GT;
	v->a[96922] = anon_sym_SEMI_SEMI;
	v->a[96923] = anon_sym_PIPE_AMP;
	v->a[96924] = anon_sym_AMP_GT;
	v->a[96925] = anon_sym_AMP_GT_GT;
	v->a[96926] = anon_sym_LT_AMP;
	v->a[96927] = anon_sym_GT_AMP;
	v->a[96928] = anon_sym_GT_PIPE;
	v->a[96929] = anon_sym_LT_AMP_DASH;
	v->a[96930] = anon_sym_GT_AMP_DASH;
	v->a[96931] = anon_sym_LT_LT_DASH;
	v->a[96932] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[96933] = anon_sym_DOLLAR_LBRACK;
	v->a[96934] = anon_sym_DOLLAR;
	v->a[96935] = sym__special_character;
	v->a[96936] = anon_sym_DQUOTE;
	v->a[96937] = sym_raw_string;
	v->a[96938] = sym_ansi_c_string;
	v->a[96939] = aux_sym_number_token1;
	small_parse_table_4847(v);
}

void	small_parse_table_4847(t_small_parse_table_array *v)
{
	v->a[96940] = aux_sym_number_token2;
	v->a[96941] = anon_sym_DOLLAR_LBRACE;
	v->a[96942] = anon_sym_DOLLAR_LPAREN;
	v->a[96943] = anon_sym_BQUOTE;
	v->a[96944] = anon_sym_DOLLAR_BQUOTE;
	v->a[96945] = anon_sym_LT_LPAREN;
	v->a[96946] = anon_sym_GT_LPAREN;
	v->a[96947] = sym_word;
	v->a[96948] = 26;
	v->a[96949] = actions(71);
	v->a[96950] = 1;
	v->a[96951] = sym_comment;
	v->a[96952] = actions(1131);
	v->a[96953] = 1;
	v->a[96954] = anon_sym_LPAREN;
	v->a[96955] = actions(1141);
	v->a[96956] = 1;
	v->a[96957] = anon_sym_DOLLAR_LBRACK;
	v->a[96958] = actions(1145);
	v->a[96959] = 1;
	small_parse_table_4848(v);
}

void	small_parse_table_4848(t_small_parse_table_array *v)
{
	v->a[96960] = anon_sym_DOLLAR;
	v->a[96961] = actions(1149);
	v->a[96962] = 1;
	v->a[96963] = anon_sym_DQUOTE;
	v->a[96964] = actions(1153);
	v->a[96965] = 1;
	v->a[96966] = aux_sym_number_token1;
	v->a[96967] = actions(1155);
	v->a[96968] = 1;
	v->a[96969] = aux_sym_number_token2;
	v->a[96970] = actions(1157);
	v->a[96971] = 1;
	v->a[96972] = anon_sym_DOLLAR_LBRACE;
	v->a[96973] = actions(1159);
	v->a[96974] = 1;
	v->a[96975] = anon_sym_DOLLAR_LPAREN;
	v->a[96976] = actions(1163);
	v->a[96977] = 1;
	v->a[96978] = anon_sym_DOLLAR_BQUOTE;
	v->a[96979] = actions(1169);
	small_parse_table_4849(v);
}

void	small_parse_table_4849(t_small_parse_table_array *v)
{
	v->a[96980] = 1;
	v->a[96981] = sym__brace_start;
	v->a[96982] = actions(1187);
	v->a[96983] = 1;
	v->a[96984] = sym_word;
	v->a[96985] = actions(1189);
	v->a[96986] = 1;
	v->a[96987] = anon_sym_BANG;
	v->a[96988] = actions(1195);
	v->a[96989] = 1;
	v->a[96990] = anon_sym_TILDE;
	v->a[96991] = actions(1201);
	v->a[96992] = 1;
	v->a[96993] = sym_test_operator;
	v->a[96994] = actions(3060);
	v->a[96995] = 1;
	v->a[96996] = anon_sym_BQUOTE;
	v->a[96997] = actions(5779);
	v->a[96998] = 1;
	v->a[96999] = sym__special_character;
	small_parse_table_4850(v);
}

/* EOF small_parse_table_969.c */
