/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2189.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10945(t_small_parse_table_array *v)
{
	v->a[218900] = 1;
	v->a[218901] = sym__brace_start;
	v->a[218902] = actions(9720);
	v->a[218903] = 1;
	v->a[218904] = sym_word;
	v->a[218905] = actions(9728);
	v->a[218906] = 1;
	v->a[218907] = sym__comment_word;
	v->a[218908] = actions(10424);
	v->a[218909] = 1;
	v->a[218910] = anon_sym_DOLLAR;
	v->a[218911] = actions(8174);
	v->a[218912] = 2;
	v->a[218913] = anon_sym_LPAREN_LPAREN;
	v->a[218914] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[218915] = actions(8200);
	v->a[218916] = 2;
	v->a[218917] = anon_sym_LT_LPAREN;
	v->a[218918] = anon_sym_GT_LPAREN;
	v->a[218919] = actions(9724);
	small_parse_table_10946(v);
}

void	small_parse_table_10946(t_small_parse_table_array *v)
{
	v->a[218920] = 2;
	v->a[218921] = sym_test_operator;
	v->a[218922] = sym__special_character;
	v->a[218923] = actions(9726);
	v->a[218924] = 3;
	v->a[218925] = sym__bare_dollar;
	v->a[218926] = sym_raw_string;
	v->a[218927] = sym_ansi_c_string;
	v->a[218928] = state(1590);
	v->a[218929] = 9;
	v->a[218930] = sym_arithmetic_expansion;
	v->a[218931] = sym_brace_expression;
	v->a[218932] = sym_string;
	v->a[218933] = sym_translated_string;
	v->a[218934] = sym_number;
	v->a[218935] = sym_simple_expansion;
	v->a[218936] = sym_expansion;
	v->a[218937] = sym_command_substitution;
	v->a[218938] = sym_process_substitution;
	v->a[218939] = 18;
	small_parse_table_10947(v);
}

void	small_parse_table_10947(t_small_parse_table_array *v)
{
	v->a[218940] = actions(3);
	v->a[218941] = 1;
	v->a[218942] = sym_comment;
	v->a[218943] = actions(8178);
	v->a[218944] = 1;
	v->a[218945] = anon_sym_DOLLAR_LBRACK;
	v->a[218946] = actions(8184);
	v->a[218947] = 1;
	v->a[218948] = anon_sym_DQUOTE;
	v->a[218949] = actions(8188);
	v->a[218950] = 1;
	v->a[218951] = aux_sym_number_token1;
	v->a[218952] = actions(8190);
	v->a[218953] = 1;
	v->a[218954] = aux_sym_number_token2;
	v->a[218955] = actions(8192);
	v->a[218956] = 1;
	v->a[218957] = anon_sym_DOLLAR_LBRACE;
	v->a[218958] = actions(8194);
	v->a[218959] = 1;
	small_parse_table_10948(v);
}

void	small_parse_table_10948(t_small_parse_table_array *v)
{
	v->a[218960] = anon_sym_DOLLAR_LPAREN;
	v->a[218961] = actions(8196);
	v->a[218962] = 1;
	v->a[218963] = anon_sym_BQUOTE;
	v->a[218964] = actions(8198);
	v->a[218965] = 1;
	v->a[218966] = anon_sym_DOLLAR_BQUOTE;
	v->a[218967] = actions(8208);
	v->a[218968] = 1;
	v->a[218969] = sym__brace_start;
	v->a[218970] = actions(9720);
	v->a[218971] = 1;
	v->a[218972] = sym_word;
	v->a[218973] = actions(9728);
	v->a[218974] = 1;
	v->a[218975] = sym__comment_word;
	v->a[218976] = actions(10426);
	v->a[218977] = 1;
	v->a[218978] = anon_sym_DOLLAR;
	v->a[218979] = actions(8174);
	small_parse_table_10949(v);
}

void	small_parse_table_10949(t_small_parse_table_array *v)
{
	v->a[218980] = 2;
	v->a[218981] = anon_sym_LPAREN_LPAREN;
	v->a[218982] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[218983] = actions(8200);
	v->a[218984] = 2;
	v->a[218985] = anon_sym_LT_LPAREN;
	v->a[218986] = anon_sym_GT_LPAREN;
	v->a[218987] = actions(9724);
	v->a[218988] = 2;
	v->a[218989] = sym_test_operator;
	v->a[218990] = sym__special_character;
	v->a[218991] = actions(9726);
	v->a[218992] = 3;
	v->a[218993] = sym__bare_dollar;
	v->a[218994] = sym_raw_string;
	v->a[218995] = sym_ansi_c_string;
	v->a[218996] = state(1590);
	v->a[218997] = 9;
	v->a[218998] = sym_arithmetic_expansion;
	v->a[218999] = sym_brace_expression;
	small_parse_table_10950(v);
}

/* EOF small_parse_table_2189.c */
