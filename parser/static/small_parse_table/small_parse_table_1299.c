/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1299.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6495(t_small_parse_table_array *v)
{
	v->a[129900] = anon_sym_DOLLAR;
	v->a[129901] = sym__special_character;
	v->a[129902] = anon_sym_DQUOTE;
	v->a[129903] = sym_raw_string;
	v->a[129904] = sym_ansi_c_string;
	v->a[129905] = aux_sym_number_token1;
	v->a[129906] = aux_sym_number_token2;
	v->a[129907] = anon_sym_DOLLAR_LBRACE;
	v->a[129908] = anon_sym_DOLLAR_LPAREN;
	v->a[129909] = anon_sym_BQUOTE;
	v->a[129910] = anon_sym_DOLLAR_BQUOTE;
	v->a[129911] = anon_sym_LT_LPAREN;
	v->a[129912] = anon_sym_GT_LPAREN;
	v->a[129913] = sym_word;
	v->a[129914] = 6;
	v->a[129915] = actions(3);
	v->a[129916] = 1;
	v->a[129917] = sym_comment;
	v->a[129918] = actions(6013);
	v->a[129919] = 1;
	small_parse_table_6496(v);
}

void	small_parse_table_6496(t_small_parse_table_array *v)
{
	v->a[129920] = aux_sym_concatenation_token1;
	v->a[129921] = actions(6683);
	v->a[129922] = 1;
	v->a[129923] = sym__concat;
	v->a[129924] = state(1879);
	v->a[129925] = 1;
	v->a[129926] = aux_sym_concatenation_repeat1;
	v->a[129927] = actions(1288);
	v->a[129928] = 4;
	v->a[129929] = sym_file_descriptor;
	v->a[129930] = sym_test_operator;
	v->a[129931] = sym__brace_start;
	v->a[129932] = aux_sym_heredoc_redirect_token1;
	v->a[129933] = actions(1286);
	v->a[129934] = 33;
	v->a[129935] = anon_sym_LPAREN_LPAREN;
	v->a[129936] = anon_sym_PIPE_PIPE;
	v->a[129937] = anon_sym_AMP_AMP;
	v->a[129938] = anon_sym_PIPE;
	v->a[129939] = anon_sym_LT;
	small_parse_table_6497(v);
}

void	small_parse_table_6497(t_small_parse_table_array *v)
{
	v->a[129940] = anon_sym_GT;
	v->a[129941] = anon_sym_LT_LT;
	v->a[129942] = anon_sym_GT_GT;
	v->a[129943] = anon_sym_PIPE_AMP;
	v->a[129944] = anon_sym_AMP_GT;
	v->a[129945] = anon_sym_AMP_GT_GT;
	v->a[129946] = anon_sym_LT_AMP;
	v->a[129947] = anon_sym_GT_AMP;
	v->a[129948] = anon_sym_GT_PIPE;
	v->a[129949] = anon_sym_LT_AMP_DASH;
	v->a[129950] = anon_sym_GT_AMP_DASH;
	v->a[129951] = anon_sym_LT_LT_DASH;
	v->a[129952] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[129953] = anon_sym_DOLLAR_LBRACK;
	v->a[129954] = anon_sym_DOLLAR;
	v->a[129955] = sym__special_character;
	v->a[129956] = anon_sym_DQUOTE;
	v->a[129957] = sym_raw_string;
	v->a[129958] = sym_ansi_c_string;
	v->a[129959] = aux_sym_number_token1;
	small_parse_table_6498(v);
}

void	small_parse_table_6498(t_small_parse_table_array *v)
{
	v->a[129960] = aux_sym_number_token2;
	v->a[129961] = anon_sym_DOLLAR_LBRACE;
	v->a[129962] = anon_sym_DOLLAR_LPAREN;
	v->a[129963] = anon_sym_BQUOTE;
	v->a[129964] = anon_sym_DOLLAR_BQUOTE;
	v->a[129965] = anon_sym_LT_LPAREN;
	v->a[129966] = anon_sym_GT_LPAREN;
	v->a[129967] = sym_word;
	v->a[129968] = 5;
	v->a[129969] = actions(71);
	v->a[129970] = 1;
	v->a[129971] = sym_comment;
	v->a[129972] = actions(6652);
	v->a[129973] = 1;
	v->a[129974] = sym__special_character;
	v->a[129975] = state(2474);
	v->a[129976] = 1;
	v->a[129977] = aux_sym__literal_repeat1;
	v->a[129978] = actions(243);
	v->a[129979] = 14;
	small_parse_table_6499(v);
}

void	small_parse_table_6499(t_small_parse_table_array *v)
{
	v->a[129980] = anon_sym_EQ;
	v->a[129981] = anon_sym_PIPE;
	v->a[129982] = anon_sym_CARET;
	v->a[129983] = anon_sym_AMP;
	v->a[129984] = anon_sym_LT;
	v->a[129985] = anon_sym_GT;
	v->a[129986] = anon_sym_LT_LT;
	v->a[129987] = anon_sym_GT_GT;
	v->a[129988] = anon_sym_PLUS;
	v->a[129989] = anon_sym_DASH;
	v->a[129990] = anon_sym_STAR;
	v->a[129991] = anon_sym_SLASH;
	v->a[129992] = anon_sym_PERCENT;
	v->a[129993] = anon_sym_STAR_STAR;
	v->a[129994] = actions(354);
	v->a[129995] = 24;
	v->a[129996] = sym__concat;
	v->a[129997] = sym_test_operator;
	v->a[129998] = anon_sym_PLUS_PLUS;
	v->a[129999] = anon_sym_DASH_DASH;
	small_parse_table_6500(v);
}

/* EOF small_parse_table_1299.c */
