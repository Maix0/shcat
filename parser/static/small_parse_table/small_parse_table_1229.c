/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1229.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6145(t_small_parse_table_array *v)
{
	v->a[122900] = anon_sym_LT_AMP_DASH;
	v->a[122901] = anon_sym_GT_AMP_DASH;
	v->a[122902] = anon_sym_LT_LT_DASH;
	v->a[122903] = anon_sym_LT_LT_LT;
	v->a[122904] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[122905] = anon_sym_DOLLAR_LBRACK;
	v->a[122906] = aux_sym_concatenation_token1;
	v->a[122907] = anon_sym_DQUOTE;
	v->a[122908] = sym_raw_string;
	v->a[122909] = sym_ansi_c_string;
	v->a[122910] = anon_sym_DOLLAR_LBRACE;
	v->a[122911] = anon_sym_DOLLAR_BQUOTE;
	v->a[122912] = anon_sym_LT_LPAREN;
	v->a[122913] = anon_sym_GT_LPAREN;
	v->a[122914] = 26;
	v->a[122915] = actions(3);
	v->a[122916] = 1;
	v->a[122917] = sym_comment;
	v->a[122918] = actions(6480);
	v->a[122919] = 1;
	small_parse_table_6146(v);
}

void	small_parse_table_6146(t_small_parse_table_array *v)
{
	v->a[122920] = anon_sym_LPAREN;
	v->a[122921] = actions(6482);
	v->a[122922] = 1;
	v->a[122923] = anon_sym_esac;
	v->a[122924] = actions(6484);
	v->a[122925] = 1;
	v->a[122926] = aux_sym_heredoc_redirect_token1;
	v->a[122927] = actions(6486);
	v->a[122928] = 1;
	v->a[122929] = anon_sym_DOLLAR_LBRACK;
	v->a[122930] = actions(6488);
	v->a[122931] = 1;
	v->a[122932] = anon_sym_DOLLAR;
	v->a[122933] = actions(6490);
	v->a[122934] = 1;
	v->a[122935] = sym__special_character;
	v->a[122936] = actions(6492);
	v->a[122937] = 1;
	v->a[122938] = anon_sym_DQUOTE;
	v->a[122939] = actions(6494);
	small_parse_table_6147(v);
}

void	small_parse_table_6147(t_small_parse_table_array *v)
{
	v->a[122940] = 1;
	v->a[122941] = aux_sym_number_token1;
	v->a[122942] = actions(6496);
	v->a[122943] = 1;
	v->a[122944] = aux_sym_number_token2;
	v->a[122945] = actions(6498);
	v->a[122946] = 1;
	v->a[122947] = anon_sym_DOLLAR_LBRACE;
	v->a[122948] = actions(6500);
	v->a[122949] = 1;
	v->a[122950] = anon_sym_DOLLAR_LPAREN;
	v->a[122951] = actions(6502);
	v->a[122952] = 1;
	v->a[122953] = anon_sym_BQUOTE;
	v->a[122954] = actions(6504);
	v->a[122955] = 1;
	v->a[122956] = anon_sym_DOLLAR_BQUOTE;
	v->a[122957] = actions(6508);
	v->a[122958] = 1;
	v->a[122959] = sym_test_operator;
	small_parse_table_6148(v);
}

void	small_parse_table_6148(t_small_parse_table_array *v)
{
	v->a[122960] = actions(6510);
	v->a[122961] = 1;
	v->a[122962] = sym_extglob_pattern;
	v->a[122963] = actions(6512);
	v->a[122964] = 1;
	v->a[122965] = sym__brace_start;
	v->a[122966] = state(6426);
	v->a[122967] = 1;
	v->a[122968] = aux_sym__literal_repeat1;
	v->a[122969] = state(7044);
	v->a[122970] = 1;
	v->a[122971] = sym_last_case_item;
	v->a[122972] = actions(6476);
	v->a[122973] = 2;
	v->a[122974] = anon_sym_LPAREN_LPAREN;
	v->a[122975] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[122976] = actions(6506);
	v->a[122977] = 2;
	v->a[122978] = anon_sym_LT_LPAREN;
	v->a[122979] = anon_sym_GT_LPAREN;
	small_parse_table_6149(v);
}

void	small_parse_table_6149(t_small_parse_table_array *v)
{
	v->a[122980] = state(3236);
	v->a[122981] = 2;
	v->a[122982] = sym_case_item;
	v->a[122983] = aux_sym_case_statement_repeat1;
	v->a[122984] = state(6695);
	v->a[122985] = 2;
	v->a[122986] = sym_concatenation;
	v->a[122987] = sym__extglob_blob;
	v->a[122988] = actions(6474);
	v->a[122989] = 3;
	v->a[122990] = sym_raw_string;
	v->a[122991] = sym_ansi_c_string;
	v->a[122992] = sym_word;
	v->a[122993] = actions(6478);
	v->a[122994] = 3;
	v->a[122995] = anon_sym_SEMI;
	v->a[122996] = anon_sym_AMP;
	v->a[122997] = anon_sym_SEMI_SEMI;
	v->a[122998] = state(6303);
	v->a[122999] = 9;
	small_parse_table_6150(v);
}

/* EOF small_parse_table_1229.c */
