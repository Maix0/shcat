/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1909.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9545(t_small_parse_table_array *v)
{
	v->a[190900] = 1;
	v->a[190901] = sym_test_operator;
	v->a[190902] = state(1480);
	v->a[190903] = 1;
	v->a[190904] = aux_sym__literal_repeat1;
	v->a[190905] = actions(8422);
	v->a[190906] = 2;
	v->a[190907] = anon_sym_LPAREN_LPAREN;
	v->a[190908] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[190909] = actions(8432);
	v->a[190910] = 2;
	v->a[190911] = sym_raw_string;
	v->a[190912] = sym_ansi_c_string;
	v->a[190913] = actions(8440);
	v->a[190914] = 2;
	v->a[190915] = anon_sym_LT_LPAREN;
	v->a[190916] = anon_sym_GT_LPAREN;
	v->a[190917] = state(1498);
	v->a[190918] = 2;
	v->a[190919] = sym_concatenation;
	small_parse_table_9546(v);
}

void	small_parse_table_9546(t_small_parse_table_array *v)
{
	v->a[190920] = sym_array;
	v->a[190921] = state(1156);
	v->a[190922] = 9;
	v->a[190923] = sym_arithmetic_expansion;
	v->a[190924] = sym_brace_expression;
	v->a[190925] = sym_string;
	v->a[190926] = sym_translated_string;
	v->a[190927] = sym_number;
	v->a[190928] = sym_simple_expansion;
	v->a[190929] = sym_expansion;
	v->a[190930] = sym_command_substitution;
	v->a[190931] = sym_process_substitution;
	v->a[190932] = 23;
	v->a[190933] = actions(3);
	v->a[190934] = 1;
	v->a[190935] = sym_comment;
	v->a[190936] = actions(8176);
	v->a[190937] = 1;
	v->a[190938] = anon_sym_LPAREN;
	v->a[190939] = actions(8178);
	small_parse_table_9547(v);
}

void	small_parse_table_9547(t_small_parse_table_array *v)
{
	v->a[190940] = 1;
	v->a[190941] = anon_sym_DOLLAR_LBRACK;
	v->a[190942] = actions(8180);
	v->a[190943] = 1;
	v->a[190944] = anon_sym_DOLLAR;
	v->a[190945] = actions(8184);
	v->a[190946] = 1;
	v->a[190947] = anon_sym_DQUOTE;
	v->a[190948] = actions(8188);
	v->a[190949] = 1;
	v->a[190950] = aux_sym_number_token1;
	v->a[190951] = actions(8190);
	v->a[190952] = 1;
	v->a[190953] = aux_sym_number_token2;
	v->a[190954] = actions(8192);
	v->a[190955] = 1;
	v->a[190956] = anon_sym_DOLLAR_LBRACE;
	v->a[190957] = actions(8194);
	v->a[190958] = 1;
	v->a[190959] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_9548(v);
}

void	small_parse_table_9548(t_small_parse_table_array *v)
{
	v->a[190960] = actions(8196);
	v->a[190961] = 1;
	v->a[190962] = anon_sym_BQUOTE;
	v->a[190963] = actions(8198);
	v->a[190964] = 1;
	v->a[190965] = anon_sym_DOLLAR_BQUOTE;
	v->a[190966] = actions(8202);
	v->a[190967] = 1;
	v->a[190968] = sym__comment_word;
	v->a[190969] = actions(8204);
	v->a[190970] = 1;
	v->a[190971] = sym__empty_value;
	v->a[190972] = actions(8208);
	v->a[190973] = 1;
	v->a[190974] = sym__brace_start;
	v->a[190975] = actions(8448);
	v->a[190976] = 1;
	v->a[190977] = sym_word;
	v->a[190978] = actions(8450);
	v->a[190979] = 1;
	small_parse_table_9549(v);
}

void	small_parse_table_9549(t_small_parse_table_array *v)
{
	v->a[190980] = sym__special_character;
	v->a[190981] = actions(8454);
	v->a[190982] = 1;
	v->a[190983] = sym_test_operator;
	v->a[190984] = state(1742);
	v->a[190985] = 1;
	v->a[190986] = aux_sym__literal_repeat1;
	v->a[190987] = actions(8174);
	v->a[190988] = 2;
	v->a[190989] = anon_sym_LPAREN_LPAREN;
	v->a[190990] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[190991] = actions(8200);
	v->a[190992] = 2;
	v->a[190993] = anon_sym_LT_LPAREN;
	v->a[190994] = anon_sym_GT_LPAREN;
	v->a[190995] = actions(8452);
	v->a[190996] = 2;
	v->a[190997] = sym_raw_string;
	v->a[190998] = sym_ansi_c_string;
	v->a[190999] = state(1959);
	small_parse_table_9550(v);
}

/* EOF small_parse_table_1909.c */
