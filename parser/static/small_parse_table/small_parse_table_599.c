/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_599.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2995(t_small_parse_table_array *v)
{
	v->a[59900] = actions(2111);
	v->a[59901] = 2;
	v->a[59902] = sym_raw_string;
	v->a[59903] = sym_word;
	v->a[59904] = state(2016);
	v->a[59905] = 2;
	v->a[59906] = sym_concatenation;
	v->a[59907] = sym__extglob_blob;
	v->a[59908] = actions(2157);
	v->a[59909] = 4;
	v->a[59910] = anon_sym_SEMI_SEMI;
	v->a[59911] = aux_sym_heredoc_redirect_token1;
	v->a[59912] = anon_sym_AMP;
	v->a[59913] = anon_sym_SEMI;
	v->a[59914] = state(1896);
	v->a[59915] = 6;
	v->a[59916] = sym_arithmetic_expansion;
	v->a[59917] = sym_string;
	v->a[59918] = sym_number;
	v->a[59919] = sym_simple_expansion;
	small_parse_table_2996(v);
}

void	small_parse_table_2996(t_small_parse_table_array *v)
{
	v->a[59920] = sym_expansion;
	v->a[59921] = sym_command_substitution;
	v->a[59922] = 19;
	v->a[59923] = actions(3);
	v->a[59924] = 1;
	v->a[59925] = sym_comment;
	v->a[59926] = actions(2115);
	v->a[59927] = 1;
	v->a[59928] = anon_sym_LPAREN;
	v->a[59929] = actions(2119);
	v->a[59930] = 1;
	v->a[59931] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[59932] = actions(2121);
	v->a[59933] = 1;
	v->a[59934] = anon_sym_DOLLAR;
	v->a[59935] = actions(2123);
	v->a[59936] = 1;
	v->a[59937] = anon_sym_DQUOTE;
	v->a[59938] = actions(2125);
	v->a[59939] = 1;
	small_parse_table_2997(v);
}

void	small_parse_table_2997(t_small_parse_table_array *v)
{
	v->a[59940] = aux_sym_number_token1;
	v->a[59941] = actions(2127);
	v->a[59942] = 1;
	v->a[59943] = aux_sym_number_token2;
	v->a[59944] = actions(2129);
	v->a[59945] = 1;
	v->a[59946] = anon_sym_DOLLAR_LBRACE;
	v->a[59947] = actions(2131);
	v->a[59948] = 1;
	v->a[59949] = anon_sym_DOLLAR_LPAREN;
	v->a[59950] = actions(2133);
	v->a[59951] = 1;
	v->a[59952] = anon_sym_BQUOTE;
	v->a[59953] = actions(2135);
	v->a[59954] = 1;
	v->a[59955] = sym_extglob_pattern;
	v->a[59956] = actions(2159);
	v->a[59957] = 1;
	v->a[59958] = anon_sym_esac;
	v->a[59959] = state(1193);
	small_parse_table_2998(v);
}

void	small_parse_table_2998(t_small_parse_table_array *v)
{
	v->a[59960] = 1;
	v->a[59961] = aux_sym_case_statement_repeat1;
	v->a[59962] = state(1786);
	v->a[59963] = 1;
	v->a[59964] = sym_case_item;
	v->a[59965] = state(2166);
	v->a[59966] = 1;
	v->a[59967] = sym__case_item_last;
	v->a[59968] = actions(2111);
	v->a[59969] = 2;
	v->a[59970] = sym_raw_string;
	v->a[59971] = sym_word;
	v->a[59972] = state(2016);
	v->a[59973] = 2;
	v->a[59974] = sym_concatenation;
	v->a[59975] = sym__extglob_blob;
	v->a[59976] = actions(2161);
	v->a[59977] = 4;
	v->a[59978] = anon_sym_SEMI_SEMI;
	v->a[59979] = aux_sym_heredoc_redirect_token1;
	small_parse_table_2999(v);
}

void	small_parse_table_2999(t_small_parse_table_array *v)
{
	v->a[59980] = anon_sym_AMP;
	v->a[59981] = anon_sym_SEMI;
	v->a[59982] = state(1896);
	v->a[59983] = 6;
	v->a[59984] = sym_arithmetic_expansion;
	v->a[59985] = sym_string;
	v->a[59986] = sym_number;
	v->a[59987] = sym_simple_expansion;
	v->a[59988] = sym_expansion;
	v->a[59989] = sym_command_substitution;
	v->a[59990] = 3;
	v->a[59991] = actions(3);
	v->a[59992] = 1;
	v->a[59993] = sym_comment;
	v->a[59994] = actions(1188);
	v->a[59995] = 2;
	v->a[59996] = sym_file_descriptor;
	v->a[59997] = sym__concat;
	v->a[59998] = actions(1186);
	v->a[59999] = 26;
	small_parse_table_3000(v);
}

/* EOF small_parse_table_599.c */
